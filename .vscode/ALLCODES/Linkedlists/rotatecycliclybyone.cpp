#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // cout<<a[n-1];
    temp = a[0];
    for(int i=0;i<=n;i++){
        swap(a[i],a[i+1]);
    }
      for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<temp;
}