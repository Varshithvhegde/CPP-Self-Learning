#pragma once

#include "EmailService.h"
#include <iostream>
#include <string>
class NotificationService{
    private :
        EmailService& emailService;
    public :
        NotificationService(EmailService& emailService):emailService(emailService){}
        void notifyUser(const std::string& username, const std::string& message){
            std::cout<<"NotificationService: Notifying user "<<username<<std::endl;
            emailService.sendEmail(username+"@example.com", message);
        }
};