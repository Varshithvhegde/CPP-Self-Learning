#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

std::mutex m1;
std::mutex m2;
void thread1() {
  m1.lock();//thread one locked m1 and went to sleep
  this_thread::sleep_for(chrono::seconds(1));
  m2.lock();//wake up and asking for m2(which is locked by thread2)
  cout << "Critical Section of Thread One\n";
  m1.unlock();
  m2.unlock();
}
void thread2() {
  m2.lock();//thread 2 locked m2 and went to sleep
  this_thread::sleep_for(chrono::seconds(1));
  m1.lock();//wake up and asking for m1(which is locked by thread1)
  cout << "Critical Section of Thread Twq\n";
  m2.unlock();
  m1.unlock();
}
int main() {
  thread t1(thread1);
  thread t2(thread2);
  t1.join();
  t2.join();
}