#include <gtest/gtest.h>
#include "stl.hpp"



// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    EXPECT_STRNE("hello", "world");
}