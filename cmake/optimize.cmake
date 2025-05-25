# 优化选项宏定义（按编译器类型自适应）
function(target_optimize_all target)
    target_compile_options(${target} PRIVATE
            # 公共优化
            $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
            -O3
            -march=native          # 本地 CPU 架构优化
            -fno-stack-protector   # 禁用栈保护（性能敏感场景）
            -fomit-frame-pointer   # 省略帧指针（提升寄存器利用率）
            -fstrict-aliasing      # 启用严格别名规则
            -funroll-loops         # 循环展开
            -ffast-math            # 快速数学优化（可能影响精度）
            >
            # MSVC 优化
            $<$<CXX_COMPILER_ID:MSVC>:
            /O2        # 最大优化（速度优先）
            /Ox        # 完全优化
            /fp:fast   # 快速浮点
            /GL        # 全程序优化
            /arch:AVX2 # 启用 AVX2 指令集
            >
    )

    # 链接阶段优化
    target_link_options(${target} PRIVATE
            $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
            -fuse-ld=lld   # 使用 LLVM 的 lld 链接器（更快）
            >
            $<$<CXX_COMPILER_ID:MSVC>:
            /LTCG          # 链接时代码生成（MSVC 的 LTO）
            >
    )

    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        # Release 模式：激进优化 + 去符号化
        add_compile_definitions(NDEBUG)  # 禁用 assert 等调试代码
        add_link_options($<$<CXX_COMPILER_ID:MSVC>:/DEBUG:NONE>)  # 禁用 PDB 生成

    elseif(CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
        # 带调试信息的优化模式
        add_compile_options(-g2)
        add_link_options($<$<CXX_COMPILER_ID:MSVC>:/DEBUG>)

    elseif(CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
        # 最小体积优化
        add_compile_options($<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Oz> $<$<CXX_COMPILER_ID:MSVC>:/O1>)
    endif()

    if(USE_PGO)
        target_compile_options(${target} PRIVATE
                $<$<CXX_COMPILER_ID:GNU>:-fprofile-generate>
                $<$<CXX_COMPILER_ID:Clang>:-fprofile-instr-generate>
                $<$<CXX_COMPILER_ID:MSVC>:/GL /Gy /Gw>  # MSVC 需配合特殊配置
        )
        target_link_options(${target} PRIVATE
                $<$<CXX_COMPILER_ID:GNU>:-fprofile-generate>
                $<$<CXX_COMPILER_ID:Clang>:-fprofile-instr-generate>
        )
    endif()

    # 使用分析数据优化阶段
    if(USE_PGO_DATA)
        target_compile_options(${target} PRIVATE
                $<$<CXX_COMPILER_ID:GNU>:-fprofile-use>
                $<$<CXX_COMPILER_ID:Clang>:-fprofile-instr-use=default.profdata>
        )
    endif()

    if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
        if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
            execute_process(COMMAND ${CMAKE_CXX_COMPILER} -march=native -Q --help=target
                    OUTPUT_VARIARCH_OUTPUT ERROR_QUIET)
            string(REGEX MATCH "-march=([^ ]+)" MATCHED_ARCH ${ARCH_OUTPUT})
            if(MATCHED_ARCH)
                target_compile_options(${target} PRIVATE -march=${CMAKE_MATCH_1})
            endif()
        endif()
    endif()
endfunction()