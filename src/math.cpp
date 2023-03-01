#include "math.h"
#include <assert.h>

double math::add(double term1, double term2) {
	return term1 + term2;
}

double math::subtract(double term1, double term2) {
	return term1 - term2;
}

double math::multiply(double term1, double term2) {
	return term1 * term2;
}

double math::divide(double numerator, double denominator) {
	assert(denominator != 0 && "ERROR: divide by zero");
	return numerator / denominator;
}

double math::calculate(double term1, double term2) {
	if (term1 > term2)
		return multiply(add(term1,term2), subtract(term1, term2));
	else
		return divide(add(term1,term2), subtract(term1, term2));
}