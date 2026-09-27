#include "output.hpp"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <fstream>
#include <iomanip>
#include <sstream>

#include "json.hpp"

using json = nlohmann::json;
namespace fs = std::filesystem;

// ─────────────────────────── helpers ─────────────────────────────────────

static std::string current_timestamp() {
    auto now     = std::chrono::system_clock::now();
    auto time_t_ = std::chrono::system_clock::to_time_t(now);
    std::ostringstream oss;
    oss << std::put_time(std::gmtime(&time_t_), "%Y-%m-%dT%H:%M:%SZ");
    return oss.str();
}

std::string Output::slugify(const std::string& s) {
    std::string out;
    out.reserve(s.size());
    for (char c : s) {
        if (std::isalnum(static_cast<unsigned char>(c)) || c == '_')
            out += c;
        else if (c == '.' || c == '-' || c == ' ')
            out += '_';
    }
    return out;
}

std::string Output::pascal_case(const std::string& s) {
    std::string slug = slugify(s);
    std::string out;
    bool upper_next = true;
    for (char c : slug) {
        if (c == '_') {
            upper_next = true;
        } else {
            out += upper_next ? static_cast<char>(std::toupper(static_cast<unsigned char>(c))) : c;
            upper_next = false;
        }
    }
    return out;
}

std::string Output::snake_case(const std::string& s) {
    return slugify(s);
}

std::string Output::indent(int level) const {
    return std::string(level * m_indent, ' ');
}

std::string Output::banner() const {
    return "// Generated using deadlock-dumper\n// " + current_timestamp() + "\n\n";
}

void Output::write_file(const std::string& name, const std::string& ext,
                        const std::string& content) const {
    const auto path = m_out_dir / (name + "." + ext);
    std::ofstream f(path, std::ios::binary);
    if (!f) throw std::runtime_error("cannot write: " + path.string());
    f << content;
}

// ─────────────────────────── Constructor ─────────────────────────────────

Output::Output(const fs::path& out_dir,
               const std::vector<std::string>& file_types,
               int indent_size)
    : m_out_dir(out_dir), m_file_types(file_types), m_indent(indent_size) {
    fs::create_directories(m_out_dir);
}

// ─────────────────────────── dump_all ────────────────────────────────────

void Output::dump_all(const DumpResult& result) const {
    dump_interfaces(result.interfaces);
    dump_offsets(result.offsets);
    dump_schemas(result.schemas);
}

// ─────────────────────────── Interfaces ──────────────────────────────────

std::string Output::interfaces_hpp(const InterfaceMap& ifaces) const {
    std::ostringstream o;
    o << banner();
    o << "#pragma once\n\n#include <cstddef>\n#include <cstdint>\n\n";
    o << "namespace deadlock_dumper {\nnamespace interfaces {\n\n";

    for (const auto& [mod, entries] : ifaces) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "namespace " << snake_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "constexpr std::ptrdiff_t " << name
              << " = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }

    o << "} // namespace interfaces\n} // namespace deadlock_dumper\n";
    return o.str();
}

std::string Output::interfaces_json(const InterfaceMap& ifaces) const {
    json j;
    for (const auto& [mod, entries] : ifaces)
        for (const auto& [name, rva] : entries)
            j[mod][name] = rva;
    return j.dump(m_indent);
}

std::string Output::interfaces_rs(const InterfaceMap& ifaces) const {
    std::ostringstream o;
    o << banner();
    o << "#![allow(non_upper_case_globals, unused)]\n\npub mod deadlock_dumper {\npub mod interfaces {\n\n";
    for (const auto& [mod, entries] : ifaces) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "pub mod " << snake_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "pub const " << name
              << ": usize = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }
    o << "}} // deadlock_dumper::interfaces\n";
    return o.str();
}

std::string Output::interfaces_cs(const InterfaceMap& ifaces) const {
    std::ostringstream o;
    o << banner();
    o << "namespace DeadlockDumper.Interfaces {\n\n";
    for (const auto& [mod, entries] : ifaces) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "public static class " << pascal_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "public const nint " << name
              << " = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }
    o << "}\n";
    return o.str();
}

void Output::dump_interfaces(const InterfaceMap& ifaces) const {
    for (const auto& ext : m_file_types) {
        std::string content;
        if      (ext == "hpp")  content = interfaces_hpp (ifaces);
        else if (ext == "json") content = interfaces_json(ifaces);
        else if (ext == "rs")   content = interfaces_rs  (ifaces);
        else if (ext == "cs")   content = interfaces_cs  (ifaces);
        else continue;
        write_file("interfaces", ext, content);
    }
}

// ─────────────────────────── Offsets ─────────────────────────────────────

std::string Output::offsets_hpp(const OffsetMap& offsets) const {
    std::ostringstream o;
    o << banner();
    o << "#pragma once\n\n#include <cstddef>\n#include <cstdint>\n\n";
    o << "namespace deadlock_dumper {\nnamespace offsets {\n\n";
    for (const auto& [mod, entries] : offsets) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "namespace " << snake_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "constexpr std::ptrdiff_t " << name
              << " = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }
    o << "} // namespace offsets\n} // namespace deadlock_dumper\n";
    return o.str();
}

std::string Output::offsets_json(const OffsetMap& offsets) const {
    json j;
    for (const auto& [mod, entries] : offsets)
        for (const auto& [name, rva] : entries)
            j[mod][name] = rva;
    return j.dump(m_indent);
}

std::string Output::offsets_rs(const OffsetMap& offsets) const {
    std::ostringstream o;
    o << banner();
    o << "#![allow(non_upper_case_globals, unused)]\n\npub mod deadlock_dumper {\npub mod offsets {\n\n";
    for (const auto& [mod, entries] : offsets) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "pub mod " << snake_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "pub const " << name
              << ": usize = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }
    o << "}} // deadlock_dumper::offsets\n";
    return o.str();
}

std::string Output::offsets_cs(const OffsetMap& offsets) const {
    std::ostringstream o;
    o << banner();
    o << "namespace DeadlockDumper.Offsets {\n\n";
    for (const auto& [mod, entries] : offsets) {
        o << indent(1) << "// Module: " << mod << "\n";
        o << indent(1) << "public static class " << pascal_case(mod) << " {\n";
        for (const auto& [name, rva] : entries)
            o << indent(2) << "public const nint " << name
              << " = 0x" << std::hex << rva << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }
    o << "}\n";
    return o.str();
}

void Output::dump_offsets(const OffsetMap& offsets) const {
    for (const auto& ext : m_file_types) {
        std::string content;
        if      (ext == "hpp")  content = offsets_hpp (offsets);
        else if (ext == "json") content = offsets_json(offsets);
        else if (ext == "rs")   content = offsets_rs  (offsets);
        else if (ext == "cs")   content = offsets_cs  (offsets);
        else continue;
        write_file("offsets", ext, content);
    }
}

// ─────────────────────────── Schemas ─────────────────────────────────────

std::string Output::schemas_hpp(const std::string& module,
                                const std::vector<SchemaClass>& classes,
                                const std::vector<SchemaEnum>&  enums) const {
    std::ostringstream o;
    o << banner();
    o << "#pragma once\n\n#include <cstddef>\n#include <cstdint>\n\n";
    o << "namespace deadlock_dumper {\nnamespace schemas {\n\n";
    o << indent(1) << "// Module: " << module
      << "  classes=" << classes.size()
      << "  enums="   << enums.size() << "\n";
    o << indent(1) << "namespace " << snake_case(module) << " {\n\n";

    for (const auto& e : enums) {
        const char* type_name = [&]() -> const char* {
            switch (e.alignment) {
                case 1: return "uint8_t";
                case 2: return "uint16_t";
                case 4: return "uint32_t";
                case 8: return "uint64_t";
                default: return nullptr;
            }
        }();
        if (!type_name) continue;

        o << indent(2) << "// Alignment: " << (int)e.alignment
          << "  Members: " << e.size << "\n";
        o << indent(2) << "enum class " << slugify(e.name)
          << " : " << type_name << " {\n";
        for (const auto& m : e.members)
            o << indent(3) << m.name << " = 0x" << std::hex << m.value << std::dec << ",\n";
        o << indent(2) << "};\n\n";
    }

    for (const auto& cls : classes) {
        o << indent(2) << "// Parent: "
          << cls.parent_name.value_or("None") << "\n";
        o << indent(2) << "// Fields: " << cls.fields.size() << "\n";
        o << indent(2) << "namespace " << slugify(cls.name) << " {\n";
        for (const auto& f : cls.fields)
            o << indent(3) << "constexpr std::ptrdiff_t " << f.name
              << " = 0x" << std::hex << f.offset << std::dec
              << "; // " << f.type_name << "\n";
        o << indent(2) << "}\n\n";
    }

    o << indent(1) << "} // namespace " << snake_case(module) << "\n";
    o << "} // namespace schemas\n} // namespace deadlock_dumper\n";
    return o.str();
}

std::string Output::schemas_json(const std::string& /*module*/,
                                 const std::vector<SchemaClass>& classes,
                                 const std::vector<SchemaEnum>&  enums) const {
    json j;

    json j_classes = json::object();
    for (const auto& cls : classes) {
        json jc;
        jc["parent"] = cls.parent_name.value_or("");
        json jf = json::object();
        for (const auto& f : cls.fields)
            jf[f.name] = f.offset;
        jc["fields"] = jf;
        j_classes[cls.name] = jc;
    }
    j["classes"] = j_classes;

    json j_enums = json::object();
    for (const auto& e : enums) {
        json je;
        je["alignment"] = e.alignment;
        json jm = json::object();
        for (const auto& m : e.members)
            jm[m.name] = m.value;
        je["members"] = jm;
        j_enums[e.name] = je;
    }
    j["enums"] = j_enums;

    return j.dump(m_indent);
}

std::string Output::schemas_rs(const std::string& module,
                               const std::vector<SchemaClass>& classes,
                               const std::vector<SchemaEnum>&  enums) const {
    std::ostringstream o;
    o << banner();
    o << "#![allow(non_upper_case_globals, non_camel_case_types, unused)]\n\n";
    o << "pub mod " << snake_case(module) << " {\n\n";

    for (const auto& cls : classes) {
        o << indent(1) << "// Parent: " << cls.parent_name.value_or("None") << "\n";
        o << indent(1) << "pub mod " << slugify(cls.name) << " {\n";
        for (const auto& f : cls.fields)
            o << indent(2) << "pub const " << f.name
              << ": usize = 0x" << std::hex << f.offset << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }

    for (const auto& e : enums) {
        o << indent(1) << "pub mod " << slugify(e.name) << " {\n";
        for (const auto& m : e.members)
            o << indent(2) << "pub const " << m.name
              << ": i64 = 0x" << std::hex << m.value << std::dec << ";\n";
        o << indent(1) << "}\n\n";
    }

    o << "}\n";
    return o.str();
}

std::string Output::schemas_cs(const std::string& module,
                               const std::vector<SchemaClass>& classes,
                               const std::vector<SchemaEnum>&  enums) const {
    std::ostringstream o;
    o << banner();
    o << "namespace DeadlockDumper.Schemas {\n\n";
    o << indent(1) << "public static class " << pascal_case(module) << " {\n\n";

    for (const auto& cls : classes) {
        o << indent(2) << "// Parent: " << cls.parent_name.value_or("None") << "\n";
        o << indent(2) << "public static class " << slugify(cls.name) << " {\n";
        for (const auto& f : cls.fields)
            o << indent(3) << "public const nint " << f.name
              << " = 0x" << std::hex << f.offset << std::dec
              << "; // " << f.type_name << "\n";
        o << indent(2) << "}\n\n";
    }

    for (const auto& e : enums) {
        const char* cs_type = [&]() -> const char* {
            switch (e.alignment) {
                case 1: return "byte";
                case 2: return "ushort";
                case 4: return "uint";
                case 8: return "ulong";
                default: return nullptr;
            }
        }();
        if (!cs_type) continue;

        o << indent(2) << "public enum " << slugify(e.name)
          << " : " << cs_type << " {\n";
        for (const auto& m : e.members)
            o << indent(3) << m.name << " = 0x"
              << std::hex << m.value << std::dec << ",\n";
        o << indent(2) << "}\n\n";
    }

    o << indent(1) << "}\n}\n";
    return o.str();
}

void Output::dump_schemas(const SchemaMap& schemas) const {
    for (const auto& [module, data] : schemas) {
        const auto& [classes, enums] = data;
        const std::string slug = slugify(module);

        for (const auto& ext : m_file_types) {
            std::string content;
            if      (ext == "hpp")  content = schemas_hpp (module, classes, enums);
            else if (ext == "json") content = schemas_json(module, classes, enums);
            else if (ext == "rs")   content = schemas_rs  (module, classes, enums);
            else if (ext == "cs")   content = schemas_cs  (module, classes, enums);
            else continue;
            write_file(slug, ext, content);
        }
    }
}
