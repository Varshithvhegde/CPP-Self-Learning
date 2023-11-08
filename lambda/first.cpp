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
    
    vector<int> v{2, 3, 7, 14, 23};
    for_each(v.begin(), v.end(), [](int x) {std::cout<<x<<"\n";});
}