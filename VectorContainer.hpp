#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

#include "container.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "SelectionSort.hpp"
#include "SelectionSort.cpp"
#include <vector>
#include <iostream>

using namespace std;

class VectorContainer: public Container {
	public: 
		VectorContainer() : Container() { }
		void set_sort_function(Sort* sort_function) {
			this->sort_function = sort_function;
		}
	
		virtual void add_element(Base* element) {
			vcontainer.push_back(element);
		}
		virtual void print() {
			for(unsigned i = 0; i < vcontainer.size(); i++) {
				cout << vcontainer.at(i)->evaluate() << endl;
			}	
		} 
		virtual void sort() {	
			//sort_function->sort();
			}
		virtual void swap(int i, int j) { 
			Base* containeri = vcontainer.at(i);	
			Base* temp = containeri;
			Base* containerj = vcontainer.at(j);
			containeri = containerj;
			containerj = temp;
		 } 
		virtual Base* at(int i) { return vcontainer.at(i);  }
		virtual int size() { return vcontainer.size(); }
		
	private:
		vector<Base*> vcontainer;
};

#endif
