#include <iostream>
#include <memory>
using namespace std;
int main()
{
    unique_ptr<int> unptr1 = make_unique<int>(25);
    unique_ptr<int> unptr2 = move(unptr1);

    cout << *unptr2 << endl;
    cout<< *unptr1 <<endl;
}