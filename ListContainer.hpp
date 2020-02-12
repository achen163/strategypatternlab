#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include <list>
#include "base.hpp"
#include <iostream>
#include "op.hpp"

using namespace std;

class ListContainer : public Container {
	public:
	
	ListContainer(): Container() {	}

	void set_sort_function(Sort* sort_function) {
		this->sort_function = sort_function;

	}
	
	virtual void add_element(Base* element) {
		container.push_back(element);
	}
	
	virtual void print() {
		for (list<Base*>::iterator it = container.begin(); it!= container.end(); it++) {
			cout << it ->evaluate();
}  
			
	}
	
	virtual void sort() {
		
		
	}

	virtual void swap(int i, int j){
		
	}
	
	virtual Base* at(int i) {
		return container.front();

	}	
	
	virtual int size() {
		return	container.size();
		
	}


	private:
	list<Base*> container;	








}
;
#endif
