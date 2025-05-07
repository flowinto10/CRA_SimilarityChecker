#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"

TEST(TS1, TC0) {
	int actual = 0;
	int expected = 0;

	EXPECT_EQ(actual, expected);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}

