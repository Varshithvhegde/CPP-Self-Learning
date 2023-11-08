#include<iostream>
using namespace std;

void swap(void* i , void * d,int size){
    char temp[size];
    memcpy(temp,i,size);
    memcpy(i,d,size);
    memcpy(d,temp,size);
}
int main(){
    int i=5;
    double d = 3.14;

    cout<<"Befor Swapping : "<<i<<" "<<d<<endl;
    swap(&i,&d,sizeof(int));
    cout<<"Afetr Swapping : "<<i<<" "<<d<<endl;
}