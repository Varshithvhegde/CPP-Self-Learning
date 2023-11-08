#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
private:
    /* data */
public:
    MyClass(/* args */){
        cout<<"Constructor Invoked"<<endl;
    }
    ~MyClass(){
        cout<<"Destructor Invoked"<<endl;
    }
};

int main(){
    unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
}
