#include<iostream>

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int n1 = 1;
    int n2 = 2;
    swap(&n1,&n2);
    // Simple comment
    std::cout<<n1<<" "<<n2<<std::endl;
}