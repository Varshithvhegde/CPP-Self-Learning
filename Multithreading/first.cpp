#include<iostream>
#include<thread>

void function1(char symbol) {
    for(int i = 0; i < 200; i++) {
        std::cout << symbol;
    }
}

void function2() {
    for(int i = 0; i < 200; i++) {
        std::cout << "-";
    }
}

int main() {
    std::thread w1(function1,'o');
    std::thread w2(function2);

    // Wait for the threads to finish
    w1.join();
    w2.join();

    return 0;
}
