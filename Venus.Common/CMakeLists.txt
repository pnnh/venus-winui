
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 添加静态库
add_library(Venus.Common logger/logger.h logger/logger.cpp)

# 查找并引用日志库
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(Venus.Common PRIVATE spdlog::spdlog)

