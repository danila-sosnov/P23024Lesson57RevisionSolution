#include "logic.h"

bool search(int* array, int value, int first, int last)
{

	//base case
	if (first > last)
	{
		return false;
	}

	int middle = (first + last) / 2;
	if (array[middle] == value)
	{
		return true;
	}

	//recursion case
	if (value > array[middle])
	{
		first = middle + 1;
	}
	else
	{
		last = middle - 1;
	}

	return search(array, value, first, last);
}

bool binary_search(int* array, int size, int value)
{
	if (!array || size <= 0)
	{
		return false;
	}

	return search(array, value, array[0], size - 1);
}


