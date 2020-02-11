#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

#include "container.hpp"
#include "lab-04-composite-pattern-actylab4/op.hpp"
#include "lab-04-composite-pattern-actylab4/mult.hpp"
#include <vector>
#include <string>
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
				container.at(i)->stringify();
			}	
		} 
		virtual void sort() {}
		virtual int size() { return container.size(); }
		
	protected:
		vector<Base*> container;
};

#endif
