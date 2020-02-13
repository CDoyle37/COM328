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
template <class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// PostCondition: Array elements are sorted
template <class T>
void selectionSort(Array<T> & elements) {
	int min;
	int comps = 0, moves = 0;

	for (int marker = 0; marker < elements.length() - 1; marker++) {
		min = marker;
		for (int i = marker + 1; i < elements.length(); i++) {
			if (elements[i] < elements[min]) {
				min = i;
			}
			comps++;
		}

		// swap elements at position min and out
		swap(elements[marker], elements[min]);
		moves += 3;
	}

	std::cout << "Selection Sort: " << "Comps: " << comps << "  Moves: " << moves << std::endl;
}

// PostCondition: collection elements are sorted
template <class T>
void insertionSort(Array<T> & elements) {
	int in, out, temp;
	int comps = 0, moves = 0;
	for (out = 1; out < elements.length(); out++) {
		temp = elements[out];
		// find position for temp
		for (in = out; in > 0 && elements[in - 1] >= temp; in--) {
			elements[in] = elements[in - 1];
			moves++;
			comps++;
		}
		// place temp in new position
		elements[in] = temp;
		comps++;
	}

	std::cout << "Insertion Sort: " << "Comps: " << comps << "  Moves: " << moves << std::endl;
}

#endif