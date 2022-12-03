#include <stdio.h>
#include<iostream>
using namespace std;
int power(int b,int p){
    int sum=0;
    if(p<0){
        return 1;
    }
    while(p>0){
    sum = sum+power(b,p-2);
    }
    return sum;
}
int main(){
   int b,p;
   cin>>b>>p;
   cout<<power(b,p);
   return 0;
}