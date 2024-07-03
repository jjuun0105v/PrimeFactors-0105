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

TEST_F(PrimeFixture, tc2) {
	expected = { 3 };
	EXPECT_EQ(expected, primeFactor.of(3));
}

TEST_F(PrimeFixture, tc3) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, primeFactor.of(4));
}

TEST_F(PrimeFixture, tc4) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primeFactor.of(6));
}

TEST_F(PrimeFixture, tc5) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, primeFactor.of(9));
}

