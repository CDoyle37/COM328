/*
* Name   : practical2_test.cpp
* Purpose: To test the Search Functions
* Author : your name
* Version: 1.0
*/

// Use this definition to have catch run this file as main
#define CATCH_CONFIG_MAIN

// Use this definition when providing a user defined main 
//#define CATCH_CONFIG_RUNNER

#include "catch.hpp"

#include "Array.h"
#include "Search.h"

/**
 * UnOrdered Search Axioms
 */
TEST_CASE("UnOrdered Search Axioms", "[Search]")
{
	// arrange an ordered 10 element array
	Array<int> ua(10);
	ua[0] = 5; ua[1] = 10; ua[2] =  3; ua[3] = 11; ua[4] =  7; 
	ua[5] = 9; ua[6] =  3; ua[7] = 18; ua[8] =  5; ua[9] = 20;

	SECTION("Sequential Search Success")
	{
		//assert that 5 is found at position 0
		REQUIRE(sequentialSearch<int>(ua,5) == 0);

		// assert that 20 is found at postion 9		
		REQUIRE(sequentialSearch<int>(ua, 20) == 9);
	}

	SECTION("Sequential Search Failure")
	{
		//assert that 100 is not found
		REQUIRE(sequentialSearch<int>(ua, 100) == -1);
	}

	SECTION("Count occurence exists")
	{
		//assert that 3 is found twice
		REQUIRE(countOccurrence<int>(ua, 3) == 2);
	}

	SECTION("Count occurence non existent")
	{
		//assert that counting occurrence of 100 returns 0	
		REQUIRE(countOccurrence<int>(ua, 100) == 0);
	}
}

TEST_CASE("Ordered Search Axioms", "[Search]")
{
	Array<int> oa(10);
	oa[0] = 3; oa[1] = 3; oa[2] = 5; oa[3] = 5; oa[4] = 7;
	oa[5] = 9; oa[6] = 10; oa[7] = 11; oa[8] = 18; oa[9] = 20;

	SECTION("Binary Search Success")
	{
		// Make sure array is sorted before searching
		REQUIRE(isOrdered<int>(oa) == true);

		//assert that 10 is found at position 6
		REQUIRE(binarySearch<int>(oa, 10) == 6);

		// assert that 20 is found at postion 9		
		REQUIRE(binarySearch<int>(oa, 20) == 9);
	}

	SECTION("Binary Search Failure")
	{
		//assert that 100 is not found
		REQUIRE(binarySearch<int>(oa, 100) == -1);
	}

	SECTION("Count occurence orderred")
	{
		//assert that counting occurrence of 5 returns 2
		REQUIRE(countOccurrenceOrdered<int>(oa, 5) == 2);
	}
}

// add additional test cases for other algorithms

