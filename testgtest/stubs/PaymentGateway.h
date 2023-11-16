#pragma once

#include <iostream>
class PaymentGateway{
    public:
        virtual bool processPayment(double amount)=0;

};

class StubPaymentGateway :  public PaymentGateway{
    public :
        bool processPayment(double amount) override{
            std::cout<<"StubPaymentGateway : Processing payment of $"<<amount<<std::endl;
            return true;
        }
};