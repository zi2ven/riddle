cmake_minimum_required(VERSION 3.28)
project(riddle)

set(CMAKE_CXX_STANDARD 23)

find_package(LLVM CONFIG REQUIRED)
find_package(antlr4-runtime CONFIG REQUIRED)
find_package(Clang REQUIRED CONFIG)

message(STATUS "LLVM Version ${LLVM_PACKAGE_VERSION}")

include(AddLLVM)
include(cmake/optimize.cmake)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

add_executable(riddlec ${SOURCES})

target_link_options(riddlec PRIVATE
        $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
        -fuse-ld=lld   # 使用 LLVM 的 lld 链接器（更快）
        >
        $<$<CXX_COMPILER_ID:MSVC>:
        /LTCG          # 链接时代码生成（MSVC 的 LTO）
        >
)

target_include_directories(riddlec PUBLIC ${LLVM_INCLUDE_DIRS} ${ANTLR4_INCLUDE_DIR} src/ ${LLD_INCLUDE_DIRS})

set(llvm_components core irreader support analysis passes codegen target mc object linker option)
list(APPEND llvm_components x86asmparser x86desc x86codegen x86disassembler x86targetmca)
llvm_map_components_to_libnames(llvm_libs ${llvm_components})

target_link_libraries(riddlec PRIVATE
        ${llvm_libs}
        antlr4_shared
        lldCommon
        ClangDriver       # 驱动模块 (Driver, ToolChain)
        ClangBasic        # 基础库 (DiagnosticIDs, DiagnosticsEngine)
        ClangFrontend     # 前端支持 (TextDiagnosticPrinter)
        ClangTooling      # 工具链支持
        ClangParse        # 解析器
        ClangSerialization # AST 序列化
        ClangSema         # 语义分析
        ClangEdit         # 代码编辑
        ClangAST          # 抽象语法树
        ClangLex          # 词法分析
        ClangAnalysis     # 静态分析
)

if (WIN32)
    target_link_libraries(riddlec PRIVATE
            LLVMWindowsDriver
            version
    )
endif ()