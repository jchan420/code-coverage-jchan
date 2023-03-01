#ifndef MATH_H
#define MATH_H

namespace math {

// functions
int multiply(int term1, int term2);
double divide(double numerator, double denominator);


// Calculator pure virtual class
class Calculator {
	public:
	virtual void mainMenu() = 0; // displays calculator options
	virtual int multiplicationMenu() = 0; // displays multiplication menu
	virtual double divisionMenu() = 0; // displays division menu
	virtual void storeCalculation(int value) = 0; // stores the most recent calculation into memory
};

void useCalculator (Calculator& calc);

}


#endif