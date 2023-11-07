#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
// Function to print a map
template <typename K, typename V>
void printMap(const std::map<K, V> &inputMap)
{
    for (const auto &pair : inputMap)
    {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}
int main()
{
    map<int, string> myMap;
    myMap[1]="Alice";
    myMap[2]="Bob";
    myMap[3]="Varshith";
    myMap[4]="Aarshith";

    // sort using keys :
     std::vector<std::pair<int, std::string>> sortedVec(myMap.begin(), myMap.end());
    sort(sortedVec.rbegin(),sortedVec.rend());
    cout<<"Sort Keys ascending..."<<endl;
    map<int,string> sortedMap(sortedVec.begin(),sortedVec.end());
    printMap(sortedMap);
    // sort(myMap.rbegin(),myMap.rend());
    // cout<<"Sort Keys Desending..."<<endl;
    // printMap(myMap);

    // Sort using values : 
}