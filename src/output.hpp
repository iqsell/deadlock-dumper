#pragma once

#include <filesystem>
#include <string>
#include <vector>

#include "analysis.hpp"

// Generates output files (hpp, json, rs, cs) in out_dir.
class Output {
public:
    Output(const std::filesystem::path& out_dir,
           const std::vector<std::string>& file_types,
           int indent_size = 4);

    void dump_all(const DumpResult& result) const;

private:
    std::filesystem::path   m_out_dir;
    std::vector<std::string> m_file_types;
    int                     m_indent;

    void dump_interfaces(const InterfaceMap& ifaces)   const;
    void dump_offsets   (const OffsetMap&    offsets)  const;
    void dump_schemas   (const SchemaMap&    schemas)  const;

    // Per file-type writers.
    std::string interfaces_hpp (const InterfaceMap& ifaces)  const;
    std::string interfaces_json(const InterfaceMap& ifaces)  const;
    std::string interfaces_rs  (const InterfaceMap& ifaces)  const;
    std::string interfaces_cs  (const InterfaceMap& ifaces)  const;

    std::string offsets_hpp (const OffsetMap& offsets) const;
    std::string offsets_json(const OffsetMap& offsets) const;
    std::string offsets_rs  (const OffsetMap& offsets) const;
    std::string offsets_cs  (const OffsetMap& offsets) const;

    std::string schemas_hpp (const std::string& module,
                             const std::vector<SchemaClass>& classes,
                             const std::vector<SchemaEnum>&  enums) const;
    std::string schemas_json(const std::string& module,
                             const std::vector<SchemaClass>& classes,
                             const std::vector<SchemaEnum>&  enums) const;
    std::string schemas_rs  (const std::string& module,
                             const std::vector<SchemaClass>& classes,
                             const std::vector<SchemaEnum>&  enums) const;
    std::string schemas_cs  (const std::string& module,
                             const std::vector<SchemaClass>& classes,
                             const std::vector<SchemaEnum>&  enums) const;

    void write_file(const std::string& name, const std::string& ext,
                    const std::string& content) const;

    std::string banner() const;
    std::string indent(int level) const;
    static std::string slugify(const std::string& s);
    static std::string pascal_case(const std::string& s);
    static std::string snake_case(const std::string& s);
};
