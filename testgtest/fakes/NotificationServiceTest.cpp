// NotificationServiceTest.cpp
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "NotificationService.h"

class FakeEmailService : public EmailService {
public:
    void sendEmail(const std::string& recipient, const std::string& message) override {
        // Simulate sending an email (for testing purposes, print to console)
        std::cout << "FakeEmailService: (Test) Sending email to " << recipient << ": " << message << std::endl;
    }
};

TEST(NotificationServiceTest, NotifyUserTest) {
    FakeEmailService fakeEmailService;
    NotificationService notificationService(fakeEmailService);

    // Call the method using the fake
    notificationService.notifyUser("testuser", "Hello, test user!");

    // No need to verify anything in this example, as the fake implementation is simple
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
