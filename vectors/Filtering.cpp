#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Filtering for Even only" << endl;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            v.erase(v.begin()+i);
        }
    }
    for (auto &&i : v)
    {
        cout<<i<<endl;
    }
    
}