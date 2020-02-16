#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "VectorContainer.hpp"
#include "SelectionSort.hpp"

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
	EXPECT_EQ(test_container->at(0)->evaluate(), 8);
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

TEST(SortTestSet, SelectionSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);
    cout << "this is unsorted: " << endl;
    container->print();

    container->set_sort_function(new SelectionSort());
    container->sort(); 
    cout << "this is sorted: " << endl;
    container->print();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);

    EXPECT_EQ(container->at(2)->evaluate(), 28);
}
