cmake_minimum_required(VERSION 3.10)
project(ProxyPattern)

set(CMAKE_CXX_STANDARD 17)

# Main library
add_library(proxy_pattern STATIC
    src/proxy.cpp
    src/SchoolGirl.cpp
)

target_include_directories(proxy_pattern PUBLIC include)

# Main executable
add_executable(proxy_main src/main.cpp)
target_link_libraries(proxy_main proxy_pattern)

# Tests
enable_testing()
add_subdirectory(tests)
