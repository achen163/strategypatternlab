#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "mult.hpp"

TEST(AddTest, AddEvaluateWithMult) {
	Base* two = new Op(2);
	Base* three = new Op(3);
	Mult* mult = new Mult(two, three);
	Add* add = new Add(two, mult);
	EXPECT_EQ(add->evaluate(), 8);
}

TEST(AddTest, AddEvaluateWithInvalidValues) {
	Base* a = new Op('a');
	Base* b = new Op('b');
	Add* add = new Add(a, b);
	EXPECT_EQ(add->evaluate(), 195);
}

TEST(AddTest, AddStringifyWithMult) {
        Base* two = new Op(2);
        Base* three = new Op(3);
        Mult* mult = new Mult(two, three);
        Add* add = new Add(two, mult);
        EXPECT_EQ(add->stringify(), "2.000000+2.000000*3.000000");
}

TEST(AddTest, AddStringifyWithInvalidValues) {
        Base* a = new Op('a');
        Base* b = new Op('b');
        Add* add = new Add(a, b);
        EXPECT_EQ(add->stringify(), "97.000000+98.000000");
}


#endif
