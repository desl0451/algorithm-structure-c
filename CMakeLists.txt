cmake_minimum_required(VERSION 3.10)
project(algorithm-structure)

set(CMAKE_C_STANDARD 11)

# 设置 Debug 版本可执行文件输出目录为 bin/debug
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin/")
# 设置所有目标的工作目录为项目根目录下的 bin 文件夹
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
# 关键：统一设置所有可执行目标的 Working Directory
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
# 1. 目标名中的 "-" 替换为 "_"（解决非法字符问题）
# 2. 确保每个目标名唯一（解决重复命名问题）
# 00-练习示例
add_executable(Log2Demo "00-Demo Code/Demo.c")

# 01-Greedy Algorithm
add_executable(NQueen "01-Greedy Algorithm/001-NQueen.c")

# 02-Sorting Algorithms
add_executable(sort_bubble "02-Sorting Algorithms/01-Bubble Sort.c")
add_executable(sort_selection "02-Sorting Algorithms/02-Selection Sort.c")