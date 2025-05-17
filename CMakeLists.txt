cmake_minimum_required(VERSION 3.31)
project(riddle)

set(CMAKE_CXX_STANDARD 20)

find_package(LLVM CONFIG REQUIRED)
find_package(antlr4-runtime CONFIG REQUIRED)

message(STATUS "LLVM Version ${LLVM_PACKAGE_VERSION}")

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(riddlec ${SOURCES})

target_include_directories(riddlec PRIVATE ${LLVM_INCLUDE_DIRS} ${ANTLR4_INCLUDE_DIR})
target_include_directories(riddlec PRIVATE src/)

target_link_libraries(riddlec PRIVATE
        antlr4_shared
)
