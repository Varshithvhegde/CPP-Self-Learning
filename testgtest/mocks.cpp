#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Dependency interface
class MathService {
public:
    virtual int add(int a, int b) const = 0;
};

// Class using the dependency
class Calculator {
private:
    const MathService& mathService;

public:
    Calculator(const MathService& mathService) : mathService(mathService) {}

    int addWithDependency(int x, int y) const {
        return mathService.add(x, y);
    }
};

// Mock implementation for MathService
class MockMathService : public MathService {
public:
    MOCK_CONST_METHOD2(add, int(int a, int b));
};

// Test for the Calculator class using the mock
TEST(CalculatorTest, AddWithDependencyTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    // Set up expectations for the mock
    EXPECT_CALL(mockMathService, add(2, 3)).WillOnce(testing::Return(5));

    // Call the method using the mock
    int result = calculator.addWithDependency(2, 3);

    // Verify the result
    EXPECT_EQ(result, 5);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
