#include "gtest/gtest.h"
#include "op.hpp"
#include "VectorContainer.hpp"


int main(int argc, char**argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}

TEST(VectorContainerTestSet, AddElementSwapAtTest) {
	Op* seven = new Op(7);
	Op* eight = new Op(8);
	VectorContainer* test_container = new VectorContainer();
	test_container->add_element(seven);
	test_container->add_element(eight);
	ASSERT_EQ(test_container->size(), 2);
	test_container->swap(0, 1);
	EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSet, PrintandSizeTest) {
        Op* seven = new Op(7);
	Op* eight = new Op(8);
	Op* nine = new Op(9);
	Op* ten = new Op(10);
        VectorContainer* test_container = new VectorContainer();
        test_container->add_element(seven);
	test_container->add_element(eight);
	test_container->add_element(nine);
	test_container->add_element(ten);
	test_container->print();
        EXPECT_EQ(test_container->size(), 4);
}

