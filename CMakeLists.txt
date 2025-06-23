cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

project(riddle LANGUAGES CXX C)

find_package(LLVM CONFIG REQUIRED)
find_package(antlr4-runtime CONFIG REQUIRED)
find_package(Clang REQUIRED CONFIG)

message(STATUS "LLVM Version ${LLVM_PACKAGE_VERSION}")

include(AddLLVM)

file(GLOB_RECURSE SOURCES "riddlec/*.cpp" "riddlec/*.h")

add_executable(riddlec ${SOURCES})

target_link_options(riddlec PRIVATE
        $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:-fuse-ld=lld>
        $<$<CXX_COMPILER_ID:MSVC>:/LTCG>
)

target_include_directories(riddlec PUBLIC ${LLVM_INCLUDE_DIRS} ${ANTLR4_INCLUDE_DIR} riddlec/ ${LLD_INCLUDE_DIRS})

set(llvm_components core irreader support analysis passes codegen target mc object linker option)
llvm_map_components_to_libnames(llvm_libs ${llvm_components})

target_link_libraries(riddlec PRIVATE
        ${llvm_libs}
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

if (TARGET antlr4_static)
    target_link_libraries(riddlec PRIVATE antlr4_static)
elseif (TARGET antlr4_shared)
    target_link_libraries(riddlec PRIVATE antlr4_shared)
else ()
    message(FATAL_ERROR "No library targets found for antlr4-runtime")
endif ()

if (WIN32)
    target_link_libraries(riddlec PRIVATE
            LLVMWindowsDriver
            version
    )
endif ()