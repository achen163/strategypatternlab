#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

#include "container.hpp"
#include "op.hpp"
#include "mult.hpp"
#include <vector>
#include <iostream>

using namespace std;

class VectorContainer: public Container {
	public: 
		VectorContainer() : Container() {}
		void set_sort_function(Sort* sort_function) {
			this->sort_function = sort_function;
		}
	
		virtual void add_element(Base* element) {
			container.push_back(element);
		}
		virtual void print() {
			for(unsigned i = 0; i < container.size(); i++) {
				cout << container.at(i)->evaluate() << endl;
			}	
		} 
		virtual void sort() {	
			
			}
		virtual void swap(int i, int j) { 
			Base* containeri = container.at(i);	
			Base* temp = containeri;
			Base* containerj = container.at(j);
			containeri = containerj;
			containerj = temp;
		 } 
		virtual Base* at(int i) { return container.at(i);  }
		virtual int size() { return container.size(); }
		
	protected:
		vector<Base*> container;
};

#endif
