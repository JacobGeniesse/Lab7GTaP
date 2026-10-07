#include "Method1.h"
#include <algorithm>;

extern "C" {

	//Func for sorting an array of numbers
	void TestSort(int numArr[], int length) 
	{
		std::sort(numArr, numArr + length); //Use built in C++ sorting script to sort the numbers
	}
}