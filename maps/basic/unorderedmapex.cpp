#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    unordered_map<string, int> collection;
    collection["Apple"] = 10;
    collection["Banana"] = 20;
    collection["cherry"] = 30;
    collection["date"] = 40;
    cout << "Enter the element to search" << endl;
    string elementToFind = "Apple";
    cin >> elementToFind;
    if (collection.find(elementToFind) != collection.end())
    {
        cout << elementToFind << " exists in the Collection" << endl;
    }
    else
    {
        cout << "Element Not found";
    }

    for (auto &i : collection)
    {
        cout << i.first << " " << i.second << endl;
    }
}
