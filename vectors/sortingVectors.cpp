#include <iostream>
#include <vector>
#include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
void printVect(std::vector<int> vector1)
{
    for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it)
    {
        std::cout << "\t" << *it;
    }
}
int main()
{
    std::vector<int> v1;
    std::cout << "Enter the Vector Size : " <<std::endl;
    int size;
    std::cin >> size;
    int a;
    for (int i = 0; i < size; i++)
    {
        std::cin >> a;
        v1.push_back(a);
    }

    printVect(v1);

    std::cout << "Sorting Vectors : " << std::endl;

    std::sort(v1.begin(),v1.end());
    printVect(v1);
}