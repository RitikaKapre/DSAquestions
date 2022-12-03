#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr1[i] = arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }



}