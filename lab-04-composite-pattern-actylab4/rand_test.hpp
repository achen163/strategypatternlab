#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"

TEST(RandTest,RandomEvaluate){

	Rand* test = new Rand();
	EXPECT_EQ(test->evaluate(), test->evaluate());

}

TEST(RandTest, RandomStringify) {

	Rand* test = new Rand();
	EXPECT_EQ(test->stringify(), test->stringify());



}
#endif 
