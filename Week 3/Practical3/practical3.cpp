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

}

// test insertion sort
void testInsert() {

}


// return difference in the largest and smallest elements in the array  
int maxDiff(const Array<int> & data) {
    return 0;
}
// Compare performance of selection/insertion sort.
void testBoth() {

}

// test string sorting
void testString() {

}

// Main method.
int main() {
	
	//initialise the random number generator (used in fillRandom())
	srand((unsigned)time(NULL));

	// call test methods here


	// ---------------------------------------------------
	cout << endl << "Press enter to quit";
	cin.get();
	return 0;
}
