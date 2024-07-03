#include "pch.h"
#include "../Project8/Factor.cpp"

#include <vector>
using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor primeFactor;
	vector<int> expected;
};

TEST_F(PrimeFixture, tc) {
	expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFixture, tc1) {
	expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}
