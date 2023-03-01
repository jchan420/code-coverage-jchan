#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "math.h"
using namespace math;
using ::testing::InSequence;

// full list of gtest assertions can be found here:
// http://google.github.io/googletest/reference/assertions.html

// Test that the multiply() function returns a correct value with two positive inputs
TEST(MathTests, testMultiplyPositive) {
    EXPECT_EQ(multiply(2,3), 6);
}

// Test that the multiply() function returns a correct value with a positive input and a negative input
TEST(MathTests, testMultiplyNegative) {
    EXPECT_EQ(multiply(2,-3), -6);
}

// Test that the divide() function returns a correct value with two positive inputs
TEST(MathTests, testDividePositive) {
    EXPECT_DOUBLE_EQ(divide(5,2), 2.5);
}

// Test that divide by zero assertion fails successfully
TEST(MathTests, testDivideZeroNumerator) {
    EXPECT_DEATH(divide(0,0), "ERROR: divide by zero");
}

// see the following page for more information about constructing mocks:
// http://google.github.io/googletest/gmock_faq.html

// Calculator Mock
class MockCalculator : public Calculator
{
    public:
        MOCK_METHOD(void, mainMenu, (), (override));
        MOCK_METHOD(int, multiplicationMenu, (), (override));
        MOCK_METHOD(double, divisionMenu, (), (override));
        MOCK_METHOD(void, storeCalculation, (int), (override));
};

// Test that the useCalculator() function calls the multiplicationMenu() function
// followed by the storeCalculation() function
// of the the Calculator object that is passed into it
TEST(CalculatorTests, testUseCalculator) {
    MockCalculator calculator;
    {
        InSequence sequence;
        EXPECT_CALL(calculator, multiplicationMenu());
        EXPECT_CALL(calculator, storeCalculation(10));
    }

    useCalculator(calculator);
}
