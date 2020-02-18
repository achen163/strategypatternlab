#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "sort.hpp"

class BubbleSort : public Sort {
public:	
	BubbleSort() : Sort() {}
	virtual void sort(Container* container) {
		int i, j;
		bool swapped;
		for (i = 0 ; i < container->size()-1; i++) {
			swapped = false;
			for (j=0; j < container->size()-i-1; j++) {
				if (container->at(j)->evaluate()  > container->at(j+1)->evaluate()) {
					container->swap(container->at(j)->evaluate(), container->at(j+1)->evaluate());
swapped = true;
				}
			
			}
		if (swapped == false) {
			break;
		}

	}	

	

}




};
#endif
