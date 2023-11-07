#include<iostream>
#include<vector>

int main(){
    std::vector<int> v1 ={1,2,3,4,5};
    std::cout<<"Enter element to be searched"<<std::endl;
    int searched;
    std::cin>>searched;
    int flag=1;
    for (int i =0;i<v1.size();i++)
    {
        if(searched==v1[i]){
            flag=0;
            std::cout<<"Found the Element in index "<<i<<std::endl;
        }
    }
    if(flag==1){
        std::cout<<"Element Not Found"<<std::endl;
    }   
    v1.insert(v1.end(),10);
    for (auto &&i : v1)
    {
        std::cout<<i<<std::endl;
    }
    

    
}