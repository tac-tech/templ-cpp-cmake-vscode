#set(CMAKE_STATIC_LIBRARY_PREFIX "")
add_library(alib
    alib.hpp
    alib.cpp
)
target_include_directories (alib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")