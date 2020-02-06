/**
 * Search.h
 *
 * Template based Search Functions
 *
 * @author  Your name
 * @email   your email
 * @version 1.0
 */

#ifndef SEARCH_H_
#define SEARCH_H_

#include "Array.h"

// PreCondition: items Array is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int sequentialSearch( const Array<T> & items, const T & key ) {
	// Loop through entire array of items
	for (int i = 0; i < items.length(); i++) {
		if (key == items[i]) {
			std::cout << "Linear Search : [" << items << "] for " << key << " took " << i << " passes\n";
			return i;
		}
	}
	return -1;
}

// PreCondition: items Aarray is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int binarySearch(const Array<T> & items, const T & key) {
	// Print the array being searched
	std::cout << "Binary Search : [" << items << "] for " << key << "\n";

	// Establish left and right bounds
	int left = 0;
	int right = items.length() - 1;

	// Search through array, halving options each time
	while (left <= right) {
		// Calculate pivot
		int pivot = (left + right) / 2;

		// Each loop, print the left, right and pivot values
		std::cout << "Left:" << left << "  Pivot:" << pivot << "  Right:" << right << "\n";

		if (items[pivot] == key) {
			// Item found
			return pivot;
		}
		else if (items[pivot] >= key) {
			// Pivot is too far right, shift all to left
			right = pivot - 1;
		}
		else if (items[pivot] <= key) {
			// Pivot is too far left, shift all to right
			left = pivot + 1;
		}
	}
	return -1;
}

// PreCondition: Data array is full
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrence(const Array<T> & items, const T & key) {
	int total = 0;
	int comps = 0;
	for (int i = 0; i < items.length(); i++) {
		if (items[i] == key) {
			total++;
		}
		comps++;
	}
	std::cout << "Count for " << key << " in [" << items << "] took " << comps << " comparisons" << std::endl;
	return total;
}

// PreCondition: Data array is full and sorted
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrenceOrdered(const Array<T> & items, const T & key) {
	int comps = 0;
	int total = 0;
	for (int i = 0; i < items.length(); i++) {
		comps++;
		// Find first occurence
		if (items[i] == key) {
			total++;
			if (items[i + 1] != key) break;
		}
	}
	std::cout << "Count Ordered for " << key << " in [" << items << "] took " << comps << " comparisons" << std::endl;
	return total;
}

// PreCondition: Both Arrays are filled with values of type T. 
//               items - values to be searched. keys - values to search for
// PostCondition: return true if all keys are found, otherwise false
template <class T>
bool containsAll(const Array<T> & items, const Array<T> & keys) {
	return false;
}

template <class T>
bool isOrdered(const Array<T>& items) {
	for (int i = 1; i < items.length(); i++) {
		if (items[i] < items[i - 1]) return false;
	}
	return true;
}

#endif	/* SEARCH_H_ */