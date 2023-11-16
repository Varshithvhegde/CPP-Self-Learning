#pragma once

#include "PaymentGateway.h"
#include <iostream>
class ShoppingCart{
    private :
        PaymentGateway& paymentGateway;
    public:
        ShoppingCart(PaymentGateway& paymentGateway): paymentGateway(paymentGateway){}

        bool checkout(double totalAmount){
            std::cout<<"Shopping Cart : Checking out items ..."<<std::endl;
            return paymentGateway.processPayment(totalAmount);
        }
};