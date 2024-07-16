
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 添加静态库（macOS下不支持动态链接）
add_library(Native logger/logger.h logger/logger.cpp)

# 查找并引用日志库
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(Native PRIVATE spdlog::spdlog)

# 添加测试可执行程序
add_executable (Venus.Native "Venus.Native.cpp" "Venus.Native.h")
add_dependencies(Venus.Native Native)
target_link_libraries(Venus.Native PRIVATE Native)

