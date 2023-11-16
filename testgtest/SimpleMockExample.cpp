// SimpleMockExample.cpp
#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Step 1: Create an interface
class MyInterface {
public:
    virtual int getValue() const = 0;
};

// Step 2: Create a class that uses the interface
class MyClass {
private:
    const MyInterface& myInterface;

public:
    MyClass(const MyInterface& myInterface) : myInterface(myInterface) {}

    int computeValue() const {
        return 2 * myInterface.getValue();
    }
};

// Step 3: Create a mock class for the interface
class MockMyInterface : public MyInterface {
public:
    MOCK_CONST_METHOD0(getValue, int());
};

// Step 4: Write a test case using the mock
TEST(MyClassTest, ComputeValueTest) {
    MockMyInterface mockMyInterface;
    MyClass myClass(mockMyInterface);

    // Set up expectations for the mock
    EXPECT_CALL(mockMyInterface, getValue()).WillOnce(testing::Return(5));

    // Call the method using the mock
    int result = myClass.computeValue();

    // Verify the result
    EXPECT_EQ(result, 2 * 5);
}

// Step 5: Run the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
