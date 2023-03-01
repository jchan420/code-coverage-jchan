#include "gtest/gtest.h"
#include "../src/math.h"
using namespace math;

// full list of gtest assertions can be found here:
// http://google.github.io/googletest/reference/assertions.html

// Test that the add() function returns a correct value with two positive inputs
TEST(MathTests, testAddPositive) {
    EXPECT_DOUBLE_EQ(add(2,3), 5);
}

// Test that the subtract() function returns a correct value with two positive inputs
TEST(MathTests, testSubtractPositive) {
    EXPECT_DOUBLE_EQ(subtract(2,3), -1);
}

// Test that the multiply() function returns a correct value with two positive inputs
TEST(MathTests, testMultiplyPositive) {
    EXPECT_DOUBLE_EQ(multiply(2,3), 6);
}

// Test that the multiply() function returns a correct value with a positive input and a negative input
TEST(MathTests, testMultiplyNegative) {
    EXPECT_DOUBLE_EQ(multiply(2,-3), -6);
}

// Test that the divide() function returns a correct value with two positive inputs
TEST(MathTests, testDividePositive) {
    EXPECT_DOUBLE_EQ(divide(5,2), 2.5);
}

// Test that divide by zero assertion fails successfully
TEST(MathTests, testDivideZeroNumerator) {
    EXPECT_DEATH(divide(0,0), "ERROR: divide by zero");
}

// Test the first case of the calculate function
TEST(MathTests, testCalculateCase1) {
    EXPECT_EQ(calculate(2,3), -5);
}