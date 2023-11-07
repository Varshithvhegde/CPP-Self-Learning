#include<iostream>
#include<vector>
void printVector(std::vector<int> vector1);

void removeAtEnd(std::vector<int> *vector1){
    vector1->pop_back();
    // return vector1;
}
void printUsingFor(std::vector<int> vector1){
    for(int i=0;i<vector1.size();i++){
        std::cout<<vector1[i]<<std::endl;
    }
}
int main(){
    std::vector<int> vector1;
    // adding elements to vectors 
    vector1.push_back(10);
    vector1.push_back(30);
    vector1.push_back(20);
    removeAtEnd(&vector1);
    // print vectprs
    // printVector(vector1);
    printUsingFor(vector1);

}

void printVector(std::vector<int> vector1){
     for(std::vector<int>::iterator it = vector1.begin();it != vector1.end();++it){
        std::cout<<"\t"<<*it;
    }
}

