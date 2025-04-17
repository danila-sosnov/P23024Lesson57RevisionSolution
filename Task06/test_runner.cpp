#include "logic.h"
#include <cassert>

int main()
{
	// Boundary values / Граничные значения
	assert(count_dividers(-1) == 0);
	assert(count_dividers(-100) == 0);
	assert(count_dividers(0) == 0);
	assert(count_dividers(1) == 0);
	assert(count_dividers(2) == 0);
	assert(count_dividers(3) == 0);
	assert(count_dividers(4) == 1);

	assert(count_dividers(6) == 2);
	assert(count_dividers(24) == 6);
	assert(count_dividers(100) == 7);

	cout << "All tests pass successfully." << endl;
	return 0;
}


