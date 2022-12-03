#include <stdio.h>
#include<iostream>
using namespace std;
int factorial(int n){
   if(n==1){
      return 1 ;
   }
    if(n>1){
       return n*factorial(n-1);
    }
   
}
int main(){
   int number;
   cin>>number;
   cout<<factorial(number);
   return 0;
}