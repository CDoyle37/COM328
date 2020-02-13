//==============================================================================
// Name        : practical3.cpp
// Author      : your name
// Version     : 1.0
// Description : practical 3 test program to exercise the simple sort algorithms
//==============================================================================

#include <string>
#include <cstdlib>	// srand
#include <ctime>	// time
#include "Array.h"
#include "Sort.h"

using namespace std;

// PostCondition: array is filled with random numbers 1..range
void fillRandom(Array<int> & data, int range=100) {
	for (int i = 0; i < data.length(); i++) {
		data[i] = rand() % 100 + 1;
	}
}

// test selection sort
void testSelect() {
	cout << "---Testing Selection Sort---" << endl;

	Array<int> data = Array<int>(20);
	fillRandom(data, 20);

	cout << "Unsorted Data: " << data << endl;

	selectionSort(data);

	cout << "Sorted Data: " << data << endl << endl;
}

// test insertion sort
void testInsert() {
	cout << "---Testing Insertion Sort---" << endl;

	Array<int> data = Array<int>(20);
	fillRandom(data, 20);

	cout << "Unsorted Data: " << data << endl;

	insertionSort(data);

	cout << "Sorted Data: " << data << endl << endl;
}


// return difference in the largest and smallest elements in the array  
int maxDiff(const Array<int> & data) {
    return 0;
}
// Compare performance of selection/insertion sort.
void testBoth() {
	// Create two random arrays
	Array<int> insert = Array<int>(20);
	Array<int> select = Array<int>(20);
	fillRandom(insert, 20);
	select = insert;

	// Sort them
	insertionSort(insert);
	selectionSort(select);
}

// test string sorting
void testString() {

}

// Main method.
int main() {
	
	//initialise the random number generator (used in fillRandom())
	srand((unsigned)time(NULL));

	// call test methods here
	for (int i = 0; i < 10; i++) {
		testBoth();
	}

	// ---------------------------------------------------
	cout << endl << "Press enter to quit";
	cin.get();
	return 0;
}
