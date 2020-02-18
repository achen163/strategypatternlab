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
			cout << (*it) ->evaluate();
}  
			
	}
	
	virtual void sort() {
		if (sort_function == nullptr) {
			cout << "the sort function is null" << endl;
		}
		else {
			sort_function->sort(this);		
		}
	}

	virtual void swap(int i, int j){
		Base* firstelement;
		Base* secondelement;
		int counter1 =0;
		int counter2=0;
		list<Base*>:: iterator it = container.begin();
		for( it; it != container.end(); it ++) {
			if (counter1 == i) {
				firstelement = *it;
			} 		
			if (counter2 == j ) {	
				secondelement = *it;
			}
		}
		for (it = container.begin(); it != container.end(); it++){
			if (counter1 == i) {
				*it = secondelement;	
			}
			if(counter2 == j) {
				*it = firstelement;
			}
		
		}
}
	
	virtual Base* at(int i) {
	int counter = 0;	
	for (list<Base*>:: iterator it = container.begin(); it!= container.end(); it++) {
			if (counter == i){
				return *it;
				
			}
	counter++;

}	

	}	
	
	virtual int size() {
		return	container.size();
		
	}


	private:
	list<Base*> container;	








}
;
#endif
