cmake_minimum_required(VERSION 3.20.0)
project(
  starter
  VERSION 0.1.0
  LANGUAGES C CXX)

include(CTest)
enable_testing()

add_subdirectory(greeting)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
