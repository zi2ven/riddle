cmake_minimum_required(VERSION 3.31)
project(riddle)

set(CMAKE_CXX_STANDARD 20)

find_package(LLVM CONFIG REQUIRED)
find_package(antlr4-runtime CONFIG REQUIRED)

message(STATUS "LLVM Version ${LLVM_PACKAGE_VERSION}")

include_directories(${LLVM_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(riddlec ${SOURCES})

file(GLOB_RECURSE BIND_SOURCES "bindgen/*.cpp" "src/grammar/*.cpp" "src/parser/*.cpp" "src/semantic/*.cpp" "src/nodes/*.cpp")

add_executable(ridgen ${BIND_SOURCES} src/TypeInfo.cpp src/nodes.cpp)

target_include_directories(riddlec PRIVATE ${LLVM_INCLUDE_DIRS} ${ANTLR4_INCLUDE_DIR})
target_include_directories(riddlec PRIVATE src/ ${ANTLR4_INCLUDE_DIR})

target_include_directories(ridgen PRIVATE src/)

set(llvm_components core irreader support analysis passes codegen target mc object linker option)
llvm_map_components_to_libnames(llvm_libs ${llvm_components})

target_link_libraries(riddlec PRIVATE ${llvm_libs} antlr4_shared)
target_link_libraries(ridgen PRIVATE antlr4_shared)
