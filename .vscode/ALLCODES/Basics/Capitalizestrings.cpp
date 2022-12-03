#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello World";
    for(int i=0;i<str.length();i++){
        if(str[i]=='o'){
           str[i] = toupper(str[i]);
        }
    }
    cout<<str;

}