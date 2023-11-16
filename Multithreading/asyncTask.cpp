#include <future>
#include <iostream>
#include <thread>
using namespace std;
typedef long int ull;

ull findOdd(ull start, ull end) {
  ull OddSum = 0;
  cout << "Thread Id of findOdd" << this_thread::get_id() << endl;
  for (ull i = start; i <= end; ++i) {
    if (i & 1) {
      OddSum += i;
    }
  }
  return OddSum;
}

int main() {
  ull start = 0, end = 1900000000;
  cout << "Thread Id of main" << this_thread::get_id() << endl;
  cout << "Thread Created if policy is astd::launch::async" << endl;
//   future<ull> OddSum = async(launch::deferred, findOdd, start, end);
  future<ull> OddSum = async(launch::async, findOdd, start, end);
  cout << "Waiting For Result!!" << endl;
  cout << "OddSum : " << OddSum.get() << endl;
  cout << "Completed!!" << endl;
  return 0;
}