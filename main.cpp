#include <iostream>
#include "src/math.h"
using namespace math;

int main() {
    double term1 = 3;
	double term2 = 4;
	term1 = add(term1, term2);
	term2 = subtract(term1, term2);
	term1 = multiply(term1, term2);
	term2 = divide(term1, term2);

	std::cout << "term1 value: " << term1 << std::endl;
	std::cout << "term2 value: " << term2 << std::endl;
	std::cout << "calculation result: " << calculate(term1, term2) << std::endl;

    return 0;
}