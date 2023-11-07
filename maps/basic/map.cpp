#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<string,int> myMap;

    myMap["Varshith"]=12;
    myMap["Hello"]=20;

    std::string name = "Varshith";
    if (myMap.find(name) != myMap.end()) {
        std::cout << name << " is in the map." << std::endl;
    } else {
        std::cout << name << " is not in the map." << std::endl;
    }

    // Iterations 
    for (const auto &i : myMap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}