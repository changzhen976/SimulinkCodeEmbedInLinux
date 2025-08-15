cmake_minimum_required(VERSION 3.12)
project(Simulink_Code_Project)

# 设置C标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 包含目录
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/generated  # Simulink生成的头文件
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/demo  # Simulink生成的头文件
)

# 收集所有源文件
file(GLOB_RECURSE SIMULINK_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.c"
)

# 添加主程序
set(MAIN_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/test.c)

# 创建可执行文件
add_executable(${PROJECT_NAME}
    ${SIMULINK_SOURCES}
    ${MAIN_SOURCE}
)

# 链接必要的库
target_link_libraries(${PROJECT_NAME}
    m      # 数学库 (-lm)
    rt     # 实时库 (-lrt，用于clock_gettime等)
)

# 优化选项（可选）
target_compile_options(${PROJECT_NAME} PRIVATE
    -O2    # 优化级别
    -Wall  # 启用所有警告
)

# 安装目标（可选）
#install(TARGETS ${PROJECT_NAME} DESTINATION bin)
