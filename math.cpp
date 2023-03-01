#include "math.h"
#include <assert.h>

// multiply code stub
int math::multiply(int term1, int term2)
{
	return 10;
}

double math::divide(double numerator, double denominator)
{
	assert(denominator != 0 && "ERROR: divide by zero");
	return numerator / denominator;
}

void math::useCalculator(Calculator& calc) {
	int result = multiply(2,5);
	calc.storeCalculation(result);
}
