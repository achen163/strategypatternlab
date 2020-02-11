#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringifyNonZero) {
	Op* test = new Op(7.3);
	EXPECT_EQ(test->stringify(), "7.300000");
}

TEST(OpTest, OpEvaluateNonNumber) {
	Op* test = new Op('a');
	EXPECT_EQ(test->evaluate(), 97);
}

TEST(OpTest, OpStringifyNonNumber) {
        Op* test = new Op('a');
        EXPECT_EQ(test->stringify(), "97.000000");
}


#endif //__OP_TEST_HPP__
