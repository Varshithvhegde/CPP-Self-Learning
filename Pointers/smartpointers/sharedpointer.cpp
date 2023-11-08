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

int main()
{
    {
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        cout << "Shared Count" << shPtr1.use_count() << endl;
        {
            shared_ptr<MyClass> shPtr2 = shPtr1;
            cout << "Shared Count" << shPtr1.use_count() << endl;
        }
        cout << "Shared Count" << shPtr1.use_count() << endl;
    }

    system("pause>nul");
}