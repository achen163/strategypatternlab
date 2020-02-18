#include "VectorContainer.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"
#include "SelectionSort.hpp"

#include <iostream>	
using namespace std;

int main() {
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
