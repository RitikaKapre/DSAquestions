#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool twoarrequal(int arr1[],int arr2[],int n,int m){
    if(n != m){
        return false;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for(int i=0;i<n;i++){
        if(arr1[i] != arr2[i]){
            return false;
        }

    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
      for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<twoarrequal(arr1,arr2,n,m);
    
}