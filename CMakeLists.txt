cmake_minimum_required(VERSION 3.10)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)

# 包含头文件目录
include_directories(include)

# 查找所有源文件
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 添加可执行文件
# add_executable(my_executable src/main.cpp)

# 编译静态库或动态库
# add_library(my_library STATIC ${SOURCES})

# 链接库到可执行文件
# target_link_libraries(my_executable my_library)

# 设置库和可执行文件的输出目录
# set_target_properties(my_library PROPERTIES
#     ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#     LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
# )

# set_target_properties(my_executable PROPERTIES
#     RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
# )

# 添加 Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# 添加测试
file(GLOB TEST_SOURCES "test/*.cpp")
add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)