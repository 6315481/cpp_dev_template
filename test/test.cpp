#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("helllo", "world");
    EXPECT_EQ(7 * 6, 42);
}