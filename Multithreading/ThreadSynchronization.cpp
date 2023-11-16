#include<iostream>
#include<thread>
#include <mutex>
using namespace std;
long long bankBalance =0;
// Race Condition bt Thread 1 and 2
mutex m;
void addMoney(long long val){
    m.lock();
    bankBalance+=val;
    m.unlock();
}
int main(){
    std::thread t1(addMoney,100);
    std::thread t2(addMoney,200);
    t1.join();
    t2.join();
    cout<<"Final Bank Balance : "<<bankBalance<<endl;
}