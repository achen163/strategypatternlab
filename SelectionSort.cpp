#include "SelectionSort.hpp"

void sort(Container* container) {
	//selection sort 
	int i, j, min_index;
	for(i = 0; i < container->size()-1; i++) {
		min_index = i;
		for(j = i+1; j < container->size()-1; j++) {
			if(container->at(j)->evaluate() < container->at(min_index)->evaluate())
				min_index = j;
		}
		container->swap(min_index, i);
	}
}
