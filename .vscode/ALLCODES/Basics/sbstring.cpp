#include<iostream>
using namespace std;
int main(){
 string s1 = "helloworld";
 string s2 = "o";

 if(s1.find(s2) != string::npos){
     cout<<"found";
 }
 else{
     cout<<"not found";
 }
 }