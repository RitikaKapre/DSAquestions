#include<iostream>
using namespace std;

int main(){
    int num,temp=0,r=100;
    cin>>num;

    while(num>0){
        temp = temp+ num%10*r;
        num = num/10;
        // temp = temp+num;
        r=r/10;
    }
    cout<<temp;
}