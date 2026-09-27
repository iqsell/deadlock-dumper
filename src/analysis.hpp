#pragma once

#include <map>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include "memory.hpp"

// ──────────────────────────── Interfaces ─────────────────────────────────

// module_name -> { interface_name -> module_rva }
using InterfaceMap = std::map<std::string, std::map<std::string, uint64_t>>;

InterfaceMap dump_interfaces(const Memory& mem);

// ──────────────────────────── Offsets ────────────────────────────────────

// module_name -> { symbol_name -> module_rva }
using OffsetMap = std::map<std::string, std::map<std::string, uint32_t>>;

OffsetMap dump_offsets(const Memory& mem);

// ──────────────────────────── Schemas ────────────────────────────────────

struct ClassMetadataUnknown        { std::string name; };
struct ClassMetadataNetworkChange  { std::string name; };
struct ClassMetadataNetworkVarNames{ std::string name; std::string type_name; };

using ClassMetadata = std::variant<
    ClassMetadataUnknown,
    ClassMetadataNetworkChange,
    ClassMetadataNetworkVarNames>;

struct ClassField {
    std::string name;
    std::string type_name;
    int32_t     offset;
};

struct SchemaClass {
    std::string              name;
    std::string              module_name;
    std::optional<std::string> parent_name;
    std::vector<ClassMetadata> metadata;
    std::vector<ClassField>  fields;
};

struct EnumMember {
    std::string name;
    int64_t     value;
};

struct SchemaEnum {
    std::string            name;
    uint8_t                alignment;
    uint16_t               size; // member count
    std::vector<EnumMember> members;
};

// module_name -> ( classes, enums )
using SchemaMap = std::map<std::string,
                           std::pair<std::vector<SchemaClass>,
                                     std::vector<SchemaEnum>>>;

SchemaMap dump_schemas(const Memory& mem);

// ──────────────────────────── Combined ───────────────────────────────────

struct DumpResult {
    InterfaceMap interfaces;
    OffsetMap    offsets;
    SchemaMap    schemas;
};

DumpResult analyze_all(const Memory& mem);
