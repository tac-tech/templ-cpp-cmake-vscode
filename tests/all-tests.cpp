#include <iostream>
#include "alib.hpp"

#include "gtest/gtest.h"
//#include <gtest.h>
namespace
{

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(add1, equal)
{
    EXPECT_EQ(2, alib::add(1, 1));
    EXPECT_EQ(3, alib::add(1, 2));
}

TEST(add2, equal)
{
    EXPECT_EQ(1, alib::add(1, 0));
    EXPECT_EQ(5, alib::add(2, 2));
    EXPECT_EQ(5, alib::add(3, 2));
}

} // namespace
