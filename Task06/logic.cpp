#include "logic.h"


int count(int number, int divider)
{
	if (divider == 1)
	{
		return 0;
	}
	
	int c = number % divider == 0 ? 1 : 0;

	return c + count(number, divider - 1);
}

int count_dividers(int number)
{
	if (number < 4)
	{
		return 0;
	}

	return count(number, number / 2);
}