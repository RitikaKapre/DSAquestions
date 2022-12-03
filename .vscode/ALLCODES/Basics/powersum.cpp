#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,p=1,sum =0;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>b;
        sum = sum + pow(b,p);
        p = p+2;
        // cout<<sum<<" ";
        
    }
    cout<<sum;
    
 
}