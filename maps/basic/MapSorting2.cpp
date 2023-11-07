#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct CaseInsensitiveStringCompare
{
    bool operator()(const std::string &str1, const std::string &str2) const
    {
        // Convert both strings to lowercase before comparison
        std::string lowerStr1 = str1;
        std::string lowerStr2 = str2;
        std::transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);
        std::transform(lowerStr2.begin(), lowerStr2.end(), lowerStr2.begin(), ::tolower);
        return lowerStr1 < lowerStr2;
    }
};

int main()
{
    map<string, int,CaseInsensitiveStringCompare> customSortedMap;
    customSortedMap["apple"] = 5;
    customSortedMap["Banana"] = 8;  // Note the mixed case
    customSortedMap["cherry"] = 12;
    customSortedMap["date"] = 3;
    customSortedMap["apricot"] = 9;

    for (auto &&i : customSortedMap)
    {
        cout << i.first << " " << i.second << endl;
    }
}