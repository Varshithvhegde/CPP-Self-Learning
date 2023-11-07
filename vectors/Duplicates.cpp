#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 1, 3, 5, 3, 4, 6, 7, 8, 9, 2, 3, 4, 6, 7, 8, 9};
    vector<int> unique;
    for (int i = 0; i < v.size(); i++)
    {
        int a = v[i];
        if (unique.size() == 0)
        {
            unique.push_back(a);
        }
        else
        {
            int flag = 0;
            for (int j = 0; j < unique.size(); j++)
            {
                if (unique[j] == a)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                unique.push_back(a);
            }
        }
    }
    for (auto &&i : unique)
    {
        cout << i << endl;
    }
}