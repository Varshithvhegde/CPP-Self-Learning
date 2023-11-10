#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter the two Integers"<<endl;
    cin>>a;
    cin>>b;
    try{
        if(b==0){
            throw runtime_error("Denominator cannot be zero");
        }
        cout<<a/b<<endl;
    }
    catch (runtime_error e){
        cout<<"Exception Occured : "<<endl<<e.what();
    }

}