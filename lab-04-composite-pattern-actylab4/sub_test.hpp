#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include <gtest/gtest.h>
#include "sub.hpp"
#include "add.hpp"

TEST(SubTest, SubEvaluateNegativeNumber){
	Base* three= new Op(3);
	Base* negone= new Op(-1);
	Sub* subtract = new Sub(three,negone);
	EXPECT_EQ(subtract->evaluate(), 4);

}

TEST(SubTest, SubStringifyTwoNumbers){
	Base* three = new Op(3);
	Base* one = new Op(1);
	Sub* subtract = new Sub(three,one);
	EXPECT_EQ(subtract->stringify(), "3.000000 - 1.000000"); 

}

TEST(SubTest, SubEvaluateWithAddNegative){
	Base* eight = new Op(8);
	Base* one = new Op(1);
	Add* add = new Add(eight, one);
	Sub* subtract = new Sub(eight, add);
	EXPECT_EQ(subtract->evaluate(), -1);
}

#endif
