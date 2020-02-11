#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "mult.hpp"


TEST(DivTest, EvaluateDivision){
	Base* eight = new Op(8);
	Base* two = new Op(2);
	Div* div = new Div(eight,two);
	EXPECT_EQ(div->evaluate(), 4);	
}

TEST(DivTest, EvaluateDivisionWithMult){
	Base* three = new Op(3);
	Base* two = new Op(2);
	Mult* mult = new Mult(three, two);
	Div* div = new Div(mult, two);
	EXPECT_EQ(div->evaluate(), 3);

}

TEST(DivTest, StringifyDivisionWithMult){
	Base* three = new Op(3);
	Base* two = new Op(2);
	Mult* mult = new Mult(three,two);
	Div* div = new Div(mult, two);
	EXPECT_EQ(div->stringify(), "3.000000*2.000000 / 2.000000");
}

#endif
