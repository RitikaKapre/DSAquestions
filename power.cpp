#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p=1,sum =0;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>i;
        sum = sum + pow(i,p);
        p = p+2;
        cout<<sum<<" ";
        
    }
    // cout<<sum;
 
}