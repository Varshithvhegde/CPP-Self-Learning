#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    reverse(v1.begin(), v1.end());
    for (auto &&i : v1)
    {
        cout << i << endl;
    }
}