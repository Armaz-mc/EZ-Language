cmake_minimum_required(VERSION 3.10)
project(EZLanguage)

set(CMAKE_CXX_STANDARD 17)

# Manually specify ANTLR runtime include and library paths
include_directories(/usr/local/include/antlr4-runtime)
link_directories(/usr/local/lib)

file(GLOB GENERATED_SRC "generated/*.cpp")

add_executable(ez_main src/main.cpp ${GENERATED_SRC})
target_link_libraries(ez_main antlr4-runtime)