#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "sort.hpp"
#include "container.hpp"
#include "VectorContainer.hpp"
class SelectionSort : public Sort {
	public:
		virtual void sort(Container* container);
};
#endif
