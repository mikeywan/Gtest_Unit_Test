#include "../src/lcm.cpp"
#include <gtest/gtest.h>

TEST(LCMTest, PositiveNos) {
	ASSERT_EQ(6, lcm(2,3));
	ASSERT_EQ(15, lcm(3,5));
	ASSERT_EQ(12, lcm(4,6));
	ASSERT_EQ(5, lcm(1,5));
}

TEST(LCMTest, NegativeNos) {
	ASSERT_EQ(-1.0, lcm(-1,0));
	ASSERT_EQ(-1.0, lcm(-4,-6));
}

TEST(GCDTest, HandleNoneZeroInput)
{
	EXPECT_EQ(2, gcd(4, 10));
	EXPECT_EQ(6, gcd(30, 18));
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
