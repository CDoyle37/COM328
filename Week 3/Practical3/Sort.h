/**
* Sort.h
*
* Template based Sort functions
*
* @author  your name
* @version 2.0
*/
#ifndef SORT_H_
#define SORT_H_

#include "Array.h"

// ------------------------ Sort Algorithm Templates ------------------------

// PostCondition: Array elements are sorted
template <class T>
void selectionSort(Array<T> & elements) {
	int min;

	for (int marker = 0; marker < elements.length() - 1; marker++) {
		min = marker;
		for (int i = marker + 1; i < elements.length(); i++) {
			if (elements[i] < elements[min]) {
				min = i;
			}
		}

		// swap elements at position min and out
		T tmp = elements[marker];
		elements[marker] = elements[min];
		elements[min] = tmp;
	}

}

// PostCondition: collection elements are sorted
template <class T>
void insertionSort(Array<T> & elements) {
	int in, out, temp;
	for (out = 1; out < elements.length(); out++) {
		temp = elements[out];
		// find position for temp
		for (in = out; in > 0 && elements[in - 1] >= temp; in--) {
			elements[in] = elements[in - 1];
		}
		// place temp in new position
		elements[in] = temp;
	}
}

#endif

