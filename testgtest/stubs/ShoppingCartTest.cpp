#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "ShoppingCart.h"
#include "PaymentGateway.h"

class MockPaymentGateway :  public PaymentGateway{
    public :
        MOCK_METHOD1(processPayment,bool(double amount));
};

TEST(ShoppingCartTest, CheckoutTest) {
    MockPaymentGateway mockPaymentGateway;
    ShoppingCart shoppingCart(mockPaymentGateway);

    // Set up expectations for the mock
    EXPECT_CALL(mockPaymentGateway, processPayment(100.0)).WillOnce(testing::Return(true));

    // Call the method using the mock
    bool result = shoppingCart.checkout(100.0);

    // Verify the result
    EXPECT_TRUE(result);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}