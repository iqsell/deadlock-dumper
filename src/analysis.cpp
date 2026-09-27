#include "analysis.hpp"

#include <algorithm>
#include <cstring>
#include <iostream>
#include <span>

#include "memory.hpp"
#include "patterns.hpp"
#include "source2.hpp"

// ────────────────────────────── helpers ──────────────────────────────────

static std::string read_str(const Memory& mem, uint64_t ptr, size_t max = 256) {
    if (!ptr) return {};
    return mem.read_string(ptr, max).value_or("");
}

// Read a T located at remote address.
template <typename T>
static std::optional<T> rread(const Memory& mem, uint64_t addr) {
    return mem.read<T>(addr);
}

// Follow a Pointer64 (uint64_t stored in memory) and read a T.
template <typename T>
static std::optional<T> follow(const Memory& mem, uint64_t ptr_addr) {
    auto ptr = mem.read<uint64_t>(ptr_addr);
    if (!ptr || !*ptr) return std::nullopt;
    return mem.read<T>(*ptr);
}

// ─────────────────────────── Interfaces ──────────────────────────────────

// Resolve a RIP-relative instruction: read int32 at addr, return addr + 4 + rel.
static std::optional<uint64_t> resolve_rip_runtime(const Memory& mem, uint64_t addr) {
    auto rel = mem.read<int32_t>(addr);
    if (!rel) return std::nullopt;
    return addr + 4 + *rel;
}

// Walk the InterfaceReg linked list starting at list_head.
static std::map<std::string, uint64_t> read_interface_list(const Memory&   mem,
                                                            const ModuleInfo& mod,
                                                            uint64_t          list_head) {
    std::map<std::string, uint64_t> result;

    uint64_t ptr = list_head;
    while (ptr) {
        auto reg = mem.read<InterfaceReg>(ptr);
        if (!reg) break;

        const std::string name = read_str(mem, reg->name);
        if (name.empty()) { ptr = reg->next; continue; }

        // create_fn points to code; the instance pointer is at create_fn + 3 (RIP-rel LEA).
        if (reg->create_fn) {
            auto target = resolve_rip_runtime(mem, reg->create_fn + 3);
            if (target && *target >= mod.base && *target < mod.base + mod.size) {
                result[name] = *target - mod.base;
            }
        }

        ptr = reg->next;
    }

    return result;
}

InterfaceMap dump_interfaces(const Memory& mem) {
    InterfaceMap result;

    for (const auto& mod : mem.module_list()) {
        auto buf_opt = mem.read_module(mod);
        if (!buf_opt) continue;

        const auto& buf = *buf_opt;

        // Look for the "CreateInterface" export in the PE.
        // Quick search: find the pattern that loads s_pInterfaceRegs.
        // Pattern: 48 8B 0D ?? ?? ?? ?? (mov rcx, [rip+X]) near CreateInterface export.
        auto match = find_pattern(buf, "48 8B 0D ?? ?? ?? ??");
        if (!match) continue;

        auto rva = resolve_rip(buf, *match, 3, 7);
        if (!rva) continue;

        // Read the pointer stored at that RVA (head of the linked list).
        auto list_head_addr = mem.read<uint64_t>(mod.base + *rva);
        if (!list_head_addr || !*list_head_addr) continue;

        auto ifaces = read_interface_list(mem, mod, *list_head_addr);
        if (!ifaces.empty())
            result[mod.name] = std::move(ifaces);
    }

    return result;
}

// ─────────────────────────── Offsets ─────────────────────────────────────
//
// Each entry: { module, name, pattern, disp_offset, instr_size }
// disp_offset: byte offset from the match start to the int32 displacement field.
// instr_size:  total instruction length (used to compute RIP).

struct OffsetEntry {
    const char* module;
    const char* name;
    const char* pattern;
    uint32_t    disp_offset;
    uint32_t    instr_size;
};

// Deadlock (Source 2) offset patterns.
// These target x86-64 instructions of the form:
//   mov rax, [rip + X]   (48 8B 05 ?? ?? ?? ??)  disp@3 instr=7
//   mov [rip + X], rax   (48 89 05 ?? ?? ?? ??)  disp@3 instr=7
//   lea rax, [rip + X]   (48 8D 05 ?? ?? ?? ??)  disp@3 instr=7
//   lea rcx, [rip + X]   (48 8D 0D ?? ?? ?? ??)  disp@3 instr=7
//
// NOTE: patterns below are based on community research for Deadlock builds.
// Verify / update them when the game updates.
static constexpr OffsetEntry kOffsets[] = {
    // client.dll
    { "client.dll", "dwEntityList",
      "48 8B 0D ?? ?? ?? ?? 8B 41",
      3, 7 },
    { "client.dll", "dwLocalPlayerController",
      "48 8B 05 ?? ?? ?? ?? 48 89 BE",
      3, 7 },
    { "client.dll", "dwLocalPlayerPawn",
      "48 8B 05 ?? ?? ?? ?? 4C 39 B6",
      3, 7 },
    { "client.dll", "dwViewMatrix",
      "48 8D 0D ?? ?? ?? ?? 48 C1 E0",
      3, 7 },
    { "client.dll", "dwGlobalVars",
      "48 89 15 ?? ?? ?? ?? 48 89 42",
      3, 7 },
    { "client.dll", "dwGameEntitySystem",
      "48 8B 1D ?? ?? ?? ?? 48 89 1D",
      3, 7 },
    { "client.dll", "dwGameRules",
      "F6 C1 01 0F 85 ?? ?? ?? ?? 4C 8B 05 ?? ?? ?? ??",
      12, 16 },
    // engine2.dll
    { "engine2.dll", "dwNetworkGameClient",
      "48 89 3D ?? ?? ?? ?? FF 87",
      3, 7 },
    { "engine2.dll", "dwBuildNumber",
      "89 05 ?? ?? ?? ?? 48 8D 0D",
      2, 6 },
    { "engine2.dll", "dwWindowWidth",
      "8B 05 ?? ?? ?? ?? 89 07",
      2, 6 },
    { "engine2.dll", "dwWindowHeight",
      "8B 05 ?? ?? ?? ?? 89 03",
      2, 6 },
    // inputsystem.dll
    { "inputsystem.dll", "dwInputSystem",
      "48 89 05 ?? ?? ?? ?? 33 C0",
      3, 7 },
};

OffsetMap dump_offsets(const Memory& mem) {
    OffsetMap result;

    struct ModuleCache {
        ModuleInfo              info;
        std::vector<uint8_t>    buf;
    };

    std::map<std::string, ModuleCache> cache;

    for (const auto& entry : kOffsets) {
        const std::string mod_name = entry.module;

        if (cache.find(mod_name) == cache.end()) {
            auto mod_opt = mem.module_by_name(mod_name);
            if (!mod_opt) {
                std::cerr << "[warn] module not found: " << mod_name << "\n";
                continue;
            }
            auto buf_opt = mem.read_module(*mod_opt);
            if (!buf_opt) {
                std::cerr << "[warn] failed to read module: " << mod_name << "\n";
                continue;
            }
            cache[mod_name] = { *mod_opt, std::move(*buf_opt) };
        }

        const auto& mc = cache.at(mod_name);

        auto match = find_pattern(mc.buf, entry.pattern);
        if (!match) {
            std::cerr << "[warn] outdated pattern for: " << entry.name << "\n";
            continue;
        }

        auto rva = resolve_rip(mc.buf, *match, entry.disp_offset, entry.instr_size);
        if (!rva) {
            std::cerr << "[warn] rip resolution failed for: " << entry.name << "\n";
            continue;
        }

        result[mod_name][entry.name] = *rva;

        std::cout << "[+] " << entry.name
                  << " = " << mod_name << " + 0x" << std::hex << *rva << std::dec << "\n";
    }

    return result;
}

// ─────────────────────────── Schemas ─────────────────────────────────────

static std::optional<SchemaSystem> find_schema_system(const Memory& mem) {
    auto mod_opt = mem.module_by_name("schemasystem.dll");
    if (!mod_opt) return std::nullopt;

    auto buf_opt = mem.read_module(*mod_opt);
    if (!buf_opt) return std::nullopt;

    const auto& buf = *buf_opt;

    // Pattern: 4C 8D 35 ?? ?? ?? ?? 0F 28 45
    auto match = find_pattern(buf, "4C 8D 35 ?? ?? ?? ?? 0F 28 45");
    if (!match) return std::nullopt;

    auto rva = resolve_rip(buf, *match, 3, 7);
    if (!rva) return std::nullopt;

    return mem.read<SchemaSystem>(mod_opt->base + *rva);
}

static std::optional<SchemaClass> read_class_binding(const Memory& mem,
                                                      uint64_t binding_ptr) {
    if (!binding_ptr) return std::nullopt;

    auto binding = mem.read<SchemaClassInfoData>(binding_ptr);
    if (!binding) return std::nullopt;

    const std::string module_name =
        read_str(mem, binding->module_name) + ".dll";

    const std::string name = read_str(mem, binding->name);
    if (name.empty()) return std::nullopt;

    std::optional<std::string> parent_name;
    if (binding->base_classes) {
        auto base_cls_info = mem.read<SchemaBaseClassInfoData>(binding->base_classes);
        if (base_cls_info && base_cls_info->class_ptr) {
            auto base_cls = mem.read<SchemaBaseClass>(base_cls_info->class_ptr);
            if (base_cls) {
                auto pn = read_str(mem, base_cls->name);
                if (!pn.empty()) parent_name = std::move(pn);
            }
        }
    }

    // Fields
    std::vector<ClassField> fields;
    if (binding->fields && binding->field_count > 0) {
        for (int16_t i = 0; i < binding->field_count; ++i) {
            auto field_ptr = mem.read<uint64_t>(binding->fields + i * sizeof(SchemaClassFieldData));
            // Direct array: fields + i * sizeof(...)
            uint64_t field_addr = binding->fields + i * sizeof(SchemaClassFieldData);
            auto field = mem.read<SchemaClassFieldData>(field_addr);
            if (!field || !field->type) continue;

            const std::string fname = read_str(mem, field->name);
            auto type_obj = mem.read<SchemaType>(field->type);
            std::string type_name;
            if (type_obj) type_name = read_str(mem, type_obj->name);

            // Strip spaces from type name.
            type_name.erase(std::remove(type_name.begin(), type_name.end(), ' '), type_name.end());

            fields.push_back({ fname, type_name, field->offset });
        }
    }

    // Metadata
    std::vector<ClassMetadata> metadata;
    if (binding->static_metadata && binding->static_metadata_count > 0) {
        for (int16_t i = 0; i < binding->static_metadata_count; ++i) {
            uint64_t meta_addr = binding->static_metadata +
                                 i * sizeof(SchemaMetadataEntryData);
            auto meta = mem.read<SchemaMetadataEntryData>(meta_addr);
            if (!meta || !meta->network_value) continue;

            const std::string meta_name = read_str(mem, meta->name);
            auto net_val = mem.read<SchemaNetworkValue>(meta->network_value);
            if (!net_val) { metadata.push_back(ClassMetadataUnknown{ meta_name }); continue; }

            if (meta_name == "MNetworkChangeCallback") {
                auto cb_name = read_str(mem, net_val->value.name_ptr);
                metadata.push_back(ClassMetadataNetworkChange{ cb_name });
            } else if (meta_name == "MNetworkVarNames") {
                auto var_name      = read_str(mem, net_val->value.var_value.name);
                auto var_type_name = read_str(mem, net_val->value.var_value.type_name);
                var_type_name.erase(std::remove(var_type_name.begin(), var_type_name.end(), ' '),
                                    var_type_name.end());
                metadata.push_back(ClassMetadataNetworkVarNames{ var_name, var_type_name });
            } else {
                metadata.push_back(ClassMetadataUnknown{ meta_name });
            }
        }
    }

    return SchemaClass{ name, module_name, parent_name, metadata, fields };
}

static std::optional<SchemaEnum> read_enum_binding(const Memory& mem, uint64_t binding_ptr) {
    if (!binding_ptr) return std::nullopt;

    auto binding = mem.read<SchemaEnumInfoData>(binding_ptr);
    if (!binding) return std::nullopt;

    const std::string name = read_str(mem, binding->name);
    if (name.empty()) return std::nullopt;

    std::vector<EnumMember> members;
    if (binding->enumerators && binding->enumerator_count > 0) {
        for (uint16_t i = 0; i < binding->enumerator_count; ++i) {
            uint64_t enum_addr = binding->enumerators + i * sizeof(SchemaEnumeratorInfoData);
            auto enumerator = mem.read<SchemaEnumeratorInfoData>(enum_addr);
            if (!enumerator) continue;

            const std::string mname = read_str(mem, enumerator->name);
            members.push_back({ mname, static_cast<int64_t>(enumerator->value) });
        }
    }

    return SchemaEnum{ name, binding->alignment, binding->enumerator_count, members };
}

// Walk a UtlTsHash and return all non-null data pointers.
static std::vector<uint64_t> utl_ts_hash_elements(const Memory& mem,
                                                   uint64_t hash_addr,
                                                   int32_t blocks_allocated) {
    constexpr size_t BUCKET_COUNT  = 256;
    constexpr size_t BUCKET_STRIDE = 0x18; // sizeof UtlTsHashBucket
    constexpr size_t NODE_STRIDE   = 0x18; // sizeof UtlTsHashFixedData (key + next + data)

    std::vector<uint64_t> result;

    // Buckets start at hash_addr + 0x60 (after UtlMemoryPool).
    const uint64_t buckets_base = hash_addr + 0x60;

    for (size_t b = 0; b < BUCKET_COUNT; ++b) {
        const uint64_t bucket_addr = buckets_base + b * BUCKET_STRIDE;

        // first_uncommitted = bucket_addr + 0x10
        auto first_uncommitted = mem.read<uint64_t>(bucket_addr + 0x10);
        if (!first_uncommitted || !*first_uncommitted) continue;

        uint64_t node_ptr = *first_uncommitted;
        int visited = 0;

        while (node_ptr && visited < blocks_allocated) {
            // data pointer is at node + 0x10
            auto data_ptr = mem.read<uint64_t>(node_ptr + 0x10);
            if (data_ptr && *data_ptr)
                result.push_back(*data_ptr);

            auto next = mem.read<uint64_t>(node_ptr + 0x08);
            if (!next) break;
            node_ptr = *next;
            ++visited;
        }
    }

    return result;
}

SchemaMap dump_schemas(const Memory& mem) {
    SchemaMap result;

    auto schema_sys = find_schema_system(mem);
    if (!schema_sys) {
        std::cerr << "[warn] could not locate SchemaSystem\n";
        return result;
    }

    if (schema_sys->registration_count == 0) {
        std::cerr << "[warn] no schema registrations (game not fully loaded?)\n";
        return result;
    }

    // Iterate type scopes.
    for (int32_t i = 0; i < schema_sys->type_scopes.count; ++i) {
        uint64_t scope_ptr_addr = schema_sys->type_scopes.data + i * 8;
        auto scope_ptr = mem.read<uint64_t>(scope_ptr_addr);
        if (!scope_ptr || !*scope_ptr) continue;

        // Read the name field (offset 0x8, max 256 chars).
        char scope_name_buf[257]{};
        mem.read_raw(*scope_ptr + 0x8, scope_name_buf, 256);
        const std::string scope_name(scope_name_buf);

        if (scope_name.empty()) continue;

        // class_bindings hash is at *scope_ptr + 0x0560.
        const uint64_t class_hash_addr = *scope_ptr + 0x0560;

        // Read blocks_allocated from UtlMemoryPool (offset 0x0C in the pool).
        auto class_blocks = mem.read<int32_t>(class_hash_addr + 0x0C);
        int32_t class_count = class_blocks.value_or(0);

        std::vector<SchemaClass> classes;
        if (class_count > 0) {
            auto ptrs = utl_ts_hash_elements(mem, class_hash_addr, class_count);
            for (uint64_t ptr : ptrs) {
                auto cls = read_class_binding(mem, ptr);
                if (cls) classes.push_back(std::move(*cls));
            }
        }

        // enum_bindings hash is at *scope_ptr + 0x1DD0.
        const uint64_t enum_hash_addr = *scope_ptr + 0x1DD0;
        auto enum_blocks = mem.read<int32_t>(enum_hash_addr + 0x0C);
        int32_t enum_count = enum_blocks.value_or(0);

        std::vector<SchemaEnum> enums;
        if (enum_count > 0) {
            auto ptrs = utl_ts_hash_elements(mem, enum_hash_addr, enum_count);
            for (uint64_t ptr : ptrs) {
                auto e = read_enum_binding(mem, ptr);
                if (e) enums.push_back(std::move(*e));
            }
        }

        // Use scope_name (e.g. "client") + ".dll" as key.
        const std::string key = scope_name + ".dll";
        result[key] = { std::move(classes), std::move(enums) };

        std::cout << "[+] scope: " << key
                  << "  classes=" << result[key].first.size()
                  << "  enums="   << result[key].second.size() << "\n";
    }

    return result;
}

// ─────────────────────────── Combined ────────────────────────────────────

DumpResult analyze_all(const Memory& mem) {
    DumpResult result;

    std::cout << "[*] dumping interfaces...\n";
    result.interfaces = dump_interfaces(mem);

    std::cout << "[*] dumping offsets...\n";
    result.offsets = dump_offsets(mem);

    std::cout << "[*] dumping schemas...\n";
    result.schemas = dump_schemas(mem);

    return result;
}
