#include "pch.h"
#include "../Project8/Factor.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactor, tc) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}
