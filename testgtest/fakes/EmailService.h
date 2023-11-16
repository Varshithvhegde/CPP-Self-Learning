#pragma once

#include <iostream>
#include <string>
class EmailService{
    public :
        virtual void sendEmail(const std::string& recipient, const std::string& message)=0;

};

// class FakeEmailService : public EmailService{
//     public:
//     void sendEmail(const std::string& recipient, const std::string& message)override{
//     std::cout<<"FakeEmailService : Sending email to "<<recipient<<": "<<message<<std::endl;
//     }
// };