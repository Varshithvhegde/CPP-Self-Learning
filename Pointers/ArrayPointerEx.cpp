#include<iostream>

int main(){
    int arr[] ={1,2,3,4,5};
    int size =5;
    int* ptr =arr;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=*ptr;
        ptr++;
    }
    std::cout<<sum<<std::endl;
}