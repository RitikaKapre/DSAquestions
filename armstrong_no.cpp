#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,temp=0,k,l;
    cin>>n;

    for(int i=1;i<=3;i++){
        k = n%10;
        cout<<k<<" ";
        temp = temp+pow(k,3);
        n= n/10;
        // cout<<temp<<" ";
        cout<<temp<<" ";
     
    }
    
}