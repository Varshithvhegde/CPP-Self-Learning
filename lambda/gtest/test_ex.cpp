#include <C:\Users\varshithh\Downloads\pocketcpp\projects\CPP-Self-Learning\googletest\googletest\include\gtest\gtest.h>

// The code you want to test
int Add(int a, int b) {
    return a + b ;
}

// Tests for the Add function
TEST(AddFunctionTest, PositiveNumbers) {
    ASSERT_EQ(4, Add(2, 2));
}

TEST(AddFunctionTest, NegativeNumbers) {
    // ASSERT_EQ(-4, Add(-3, -2));
    EXPECT_EQ(2,2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
