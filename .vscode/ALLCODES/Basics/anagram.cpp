#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "race";
    string b= "hare";
    int count = 0;
    sort(a.begin(), a.end());
    sort(b.begin(),b.end());
    // cout<<a;

    if(a.length() != b.length()){
        cout<<"not an anagram";
    }
    else{
      for (int i = 0; i < a.length(); i++) {
        if( a[i] != b[i]){
           count++;
            
            break;
        }
    } 
    if(count >=1){
        cout<<"not anagram";
    }
    else{
        cout<<"anagram";
    }
    }
}