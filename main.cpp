#include "VectorContainer.hpp"
#include "sort.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"
#include "SelectionSort.hpp"
#include "ListContainer.hpp"
#include "BubbleSort.hpp"
#include <iostream>	
using namespace std;

int main() {
	//List Container and BubbleSort
	ListContainer* container = new ListContainer();
	Base* one = new Op(1);
	Base* two2 = new Op(2);
	Base* three = new Op(3);
	Base* add1 = new Add(one, three);
	Base* mult1 = new Mult(two2, three);
	container->add_element(one);
	container->add_element(two2);
	container->add_element(three);
	container->add_element(add1);
	container->add_element(mult1);
	cout << "Container has 12346" << endl;
	container->print();
	cout << endl;
	cout << "Container size is : " << container->size() << endl;
	cout << "Perform swap" << endl;
	container->swap(0,1);
	container->print();
	cout << endl;
	cout << "Pre-sort container: " << endl;	
	container->print();
	cout << endl;
	container->set_sort_function(new BubbleSort());
	container->sort();
	cout << "After sorting: " << endl;
	container->print(); 
	cout << endl;
	//VectorContainer functionality 
	VectorContainer* c = new VectorContainer();
	Base* seven = new Op(7);
	Base* eight = new Op(8);
	Base* two = new Op(2);
	Base* mult = new Mult(seven, eight);
	Base* sub = new Sub(eight, seven);
	Base* add = new Add(eight, seven);
	Base* pow = new Pow(eight, two);
	Base* rand = new Rand();
	c->add_element(two);
	c->add_element(eight);
	c->add_element(seven);
	c->add_element(mult);
	c->add_element(sub);
	c->add_element(add);
	c->add_element(pow);
	c->add_element(rand);
	cout << "add 2,8,7,56,1,15,64, and a random number" << endl;
	cout << "container index 2: " << c->at(2)->evaluate() << endl;
	cout << "print container: " << endl;
	c->print();
	cout << "print container size: " << c->size() << endl;
	cout << "swap index 0 and 1: " << endl;
	c->swap(0, 1);
	c->print();
	cout << "sort container using selection sort: " << endl;
	c->set_sort_function(new SelectionSort());
	c->sort();
	c->print();
	

return 0;
}
