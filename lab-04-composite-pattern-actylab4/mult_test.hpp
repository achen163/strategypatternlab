#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"
#include "sub.hpp"

TEST(MultTest, MultEvaluateWithSub) {
	Base* two = new Op(2);
	Base* three = new Op(3);
	Sub* sub = new Sub(three, two);
	Mult* mult = new Mult(sub, three);
	EXPECT_EQ(mult->evaluate(), 3);
}

TEST(MultTest, MultEvaluateWithInvalid) {
	Base* one = new Op(1);
	Base* b = new Op('b');
	Base* mult = new Mult(one, b);
	EXPECT_EQ(mult->evaluate(), 98);
}
	
TEST(MultTest, MultStringifyWithSub) {
        Base* two = new Op(2);
        Base* three = new Op(3);
        Sub* sub = new Sub(three, two);
        Mult* mult = new Mult(sub, three);
        EXPECT_EQ(mult->stringify(), "3.000000 - 2.000000*3.000000");
}

TEST(MultTest, MultStringifyWithInvalid) {
        Base* one = new Op(1);
        Base* b = new Op('b');
        Base* mult = new Mult(one, b);
        EXPECT_EQ(mult->stringify(), "1.000000*98.000000");
}


#endif

