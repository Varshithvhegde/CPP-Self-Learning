#include<iostream>

int add(int a , int b){
    return a+b;
}
int subtract(int a ,int b){
    return a-b;
}
int main(){
    int (*operation )(int ,int)=nullptr;
    operation=add;
    std::cout<<operation(1,2)<<std::endl;
    operation=subtract;
    std::cout<<operation(10,2)<<std::endl;

}