#include "gtest/gtest.h"
#include "op.hpp"
#include "VectorContainer.hpp"


int main(int argc, char**argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}

TEST(VectorContainerTestSet, SwapTest) {
	Op* seven = new Op(7);
	VectorContainer* test_container = new VectorContainer();
	test_container->add_element(seven);
	ASSERT_EQ(test_container->size(), 1);
	EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}
