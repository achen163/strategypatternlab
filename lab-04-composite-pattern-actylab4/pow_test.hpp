#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include "mult.hpp"

TEST(PowTest, PowEvaluateWithMult) {
	Base* three = new Op(3);
	Base* two = new Op(2);
	Mult* mult = new Mult(three, two);
	Pow* pow = new Pow(two, mult);
	EXPECT_EQ(pow->evaluate(), 64);
}

TEST(PowTest, PowEvaluateWithInvalid) {
	Base* one = new Op(1);
	Base* a = new Op('a');
	Pow* pow = new Pow(a, one);
	EXPECT_EQ(pow->evaluate(), 97);
}

TEST(PowTest, PowStringifyWithMult) {
        Base* three = new Op(3);
        Base* two = new Op(2);
        Mult* mult = new Mult(three, two);
        Pow* pow = new Pow(two, mult);
        EXPECT_EQ(pow->stringify(), "2.000000**3.000000*2.000000");
}

TEST(PowTest, PowStringifyWithInvalid) {
        Base* one = new Op(1);
        Base* a = new Op('a');
        Pow* pow = new Pow(a, one);
        EXPECT_EQ(pow->stringify(), "97.000000**1.000000");
}

#endif

