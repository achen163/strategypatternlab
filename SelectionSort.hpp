#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "sort.hpp"

class SelectionSort : public Sort {
	public:
		SelectionSort() : Sort() {}
		virtual void sort(Container* container) {
			int min_index = 0;
        		for(unsigned i = 0; i < container->size()-1; i++) {
                		min_index = i;
               			for(unsigned j = i+1; j < container->size(); j++) {
                        		if(container->at(j)->evaluate() < container->at(min_index)->evaluate())
                                		min_index = j;
                		}
                		container->swap(i, min_index);
        		}
		}
};
#endif
