#include<iostream>
using namespace std;
int main(){
    int a=20;
    int *ptr =&a;
    int **doubleptr = &ptr;

    cout<<"Variable a : "<<a<<endl;
    cout<<"Variable ptr : "<<*ptr<<endl;
    cout<<"Variable double ptr : "<<**doubleptr<<endl;
}