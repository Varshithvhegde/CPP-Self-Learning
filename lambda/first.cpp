#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    /*
    This is problem
    // [cc](p){fd};(Lambda Expression Structure)
    struct
    {
        void operator()(int x){
            std::cout<<x<<"\n";
        }
    }something;

    vector<int> v{2,3,7,14,23};
    for_each(v.begin(),v.end(),something);

    */

    //     Using Lambda
    // [](int x) {
    //     if(x%2==0){
    //         cout<<x<<" is even number"<<endl;
    //     }
    //     else{
    //         cout<<x<<" is odd number"<<endl;
    //     }
    // }
    int d = 7;
    vector<int> v{2, 3, 7, 14, 23};
    for_each(v.begin(), v.end(), [&](int x)
             {
        if(x%d==0){
            cout<<x<<" is divisible by "<<d<<endl;
        }
        else{
            cout<<x<<" is not divisible by "<<d<<endl;
        } 
        d=10; });

    // cout<<d<<endl;
}