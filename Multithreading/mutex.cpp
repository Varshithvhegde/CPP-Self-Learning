#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;
mutex carMutex;

void driveCar(string driverName) {
  // lock_guard<mutex> carLock(carMutex);
  unique_lock<mutex> carLock(carMutex);
  cout << driverName << " is driving" << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << driverName << " is done driving" << endl;
  carLock.unlock();
}
int main() {
  thread t1(driveCar, "Varshith");
  thread t2(driveCar, "Elon");
  t1.join();
  t2.join();
}