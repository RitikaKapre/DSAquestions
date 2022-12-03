#include <stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int power(int b,int p){
    int x=0;
    x = pow(b,p);
    return x;

 

}
int main(){
   int base,po;
   cin>>base>>po;
   cout<<power(base,po);
   return 0;
}