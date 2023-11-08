#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
private:
    /* data */
public:
    MyClass(/* args */)
    {
        cout << "Constructor Invoked" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor Invoked" << endl;
    }
};

int main(){
    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;
    }
    system("pause>nul");
}