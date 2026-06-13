#include<iostream>
using namespace std;
int main(){
    int num,rem,sum=0,originalnumber;
    cout<<"enter three number:";
    cin>>num;
    while(originalnumber!=0){
        rem=originalnumber%10;
        sum=sum+rem*rem*rem;
        originalnumber=originalnumber/10;
    }
    if(sum==num){
        cout<<"armstrong number";
    }else{
        cout<<"not armstrong number";
}return 0;
}