#include <stdio.h>
#include<iostream>
using namespace std;
string reverse(int n){
    string s;
    while(n>0){
        s= s+to_string(n%10);
        n = n/10;
    }
    return s;
 
}
int main(){
   int number;
   cin>>number;
   cout<<reverse(number);
   return 0;
}