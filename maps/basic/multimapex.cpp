#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    multimap<int, string> studentScores;
    studentScores.insert(make_pair(90, "Varshith"));
    studentScores.insert(make_pair(72, "Hello"));
    studentScores.insert(make_pair(89, "Varsha"));
    studentScores.insert(make_pair(90, "Hai"));

    for (auto &&i : studentScores)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    //  Scores with only 90
    auto scoreRange = studentScores.equal_range(90);
    for(auto it = scoreRange.first;it!= scoreRange.second;++it){
        cout<<it->second<<endl;
    }
    

}