add_executable (all-tests all-tests.cpp)
target_link_libraries (all-tests PUBLIC alib)
target_link_libraries (all-tests PUBLIC gtest gtest_main)