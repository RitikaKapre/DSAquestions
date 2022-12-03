#include <stdio.h>
#include<iostream>
using namespace std;
int fibo(int n){
   if((n==0) || (n==1)){
       return n;
   }
   
   else{
   return (fibo(n-1)+fibo(n-2));
   }
}
int main(){
   int number,i=0;
   cin>>number; 
   while(i<number){
   cout<<fibo(i)<<" ";
   i++;
   }
   return 0;
}