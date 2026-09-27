cmake_minimum_required(VERSION 3.20)
project(deadlock-dumper CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Single-header JSON library (fetch automatically)
include(FetchContent)
FetchContent_Declare(
    nlohmann_json
    URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.hpp
    DOWNLOAD_NO_EXTRACT TRUE
    DOWNLOAD_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
)
FetchContent_MakeAvailable(nlohmann_json)

add_executable(deadlock-dumper
    src/main.cpp
    src/memory.cpp
    src/analysis.cpp
    src/output.cpp
    src/patterns.cpp
)

target_include_directories(deadlock-dumper PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

if(WIN32)
    target_link_libraries(deadlock-dumper PRIVATE psapi)
endif()
