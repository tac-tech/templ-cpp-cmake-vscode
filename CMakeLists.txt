cmake_minimum_required(VERSION 3.16.0)
project(lib-bldc-can VERSION 0.1.0)

#set(CMAKE_VERBOSE_MAKEFILE ON)

### Require out-of-source builds
file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif()

# Declare dependencies
# find_package(Boost 1.55 REQUIRED COMPONENTS regex)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_MakeAvailable(googletest)

message (STATUS "googletest_SOURCE_DIR : ${googletest_SOURCE_DIR}" )
message (STATUS "googletest_BINARY_DIR : ${googletest_BINARY_DIR}" )

add_subdirectory(lib-alib)

#enable_testing()
add_subdirectory(src)
add_subdirectory(tests)
