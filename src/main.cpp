#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <chrono>

#include "analysis.hpp"
#include "memory.hpp"
#include "output.hpp"

static void print_help(const char* argv0) {
    std::cout
        << "Usage: " << argv0 << " [options]\n\n"
        << "Options:\n"
        << "  -p, --process <name>   Game process name  (default: Deadlock.exe)\n"
        << "  -o, --output  <dir>    Output directory   (default: output)\n"
        << "  -f, --formats <list>   Comma-separated formats: hpp,json,rs,cs\n"
        << "                         (default: hpp,json,rs,cs)\n"
        << "  -i, --indent  <n>      Spaces per indent level (default: 4)\n"
        << "  -h, --help             Print this help\n";
}

static std::vector<std::string> split(const std::string& s, char delim) {
    std::vector<std::string> result;
    std::string cur;
    for (char c : s) {
        if (c == delim) {
            if (!cur.empty()) { result.push_back(cur); cur.clear(); }
        } else {
            cur += c;
        }
    }
    if (!cur.empty()) result.push_back(cur);
    return result;
}

int main(int argc, char* argv[]) {
    std::string                process_name = "Deadlock.exe";
    std::filesystem::path      output_dir   = "output";
    std::vector<std::string>   file_types   = { "hpp", "json", "rs", "cs" };
    int                        indent_size  = 4;

    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];

        if (arg == "-h" || arg == "--help") {
            print_help(argv[0]);
            return 0;
        } else if ((arg == "-p" || arg == "--process") && i + 1 < argc) {
            process_name = argv[++i];
        } else if ((arg == "-o" || arg == "--output") && i + 1 < argc) {
            output_dir = argv[++i];
        } else if ((arg == "-f" || arg == "--formats") && i + 1 < argc) {
            file_types = split(argv[++i], ',');
        } else if ((arg == "-i" || arg == "--indent") && i + 1 < argc) {
            indent_size = std::stoi(argv[++i]);
        }
    }

    std::cout << "[*] deadlock-dumper\n";
    std::cout << "[*] target process : " << process_name << "\n";
    std::cout << "[*] output dir     : " << output_dir.string() << "\n";

    Memory mem(process_name);
    std::cout << "[+] attached to " << process_name
              << " (PID " << mem.pid() << ")\n";

    const auto t0 = std::chrono::steady_clock::now();

    DumpResult result = analyze_all(mem);

    Output out(output_dir, file_types, indent_size);
    out.dump_all(result);

    const auto elapsed = std::chrono::steady_clock::now() - t0;
    std::cout << "[*] done in "
              << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count()
              << " ms\n";

    return 0;
}
