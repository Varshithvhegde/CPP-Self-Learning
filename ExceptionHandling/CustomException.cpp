#include <stdio.h>
#include <stdexcept>
#include <iostream>
using namespace std;
class NegativeValueException : exception
{
private:
    /* data */
public:
    const char *what() const noexcept
    {
        return "Number Cannot be Under Zero or Negative";
    }
    
};

int main()
{
    int a, b;
    cout << "Enter Two Numbers  :" << endl;
    cin >> a;
    cin >> b;
    try
    {
        if (a < 0 || b < 0)
        {
            throw NegativeValueException();
        }
    }
    catch (NegativeValueException e)
    {
        std::cerr << "Exception Occured"<<endl<<e.what() << '\n';
    }
}