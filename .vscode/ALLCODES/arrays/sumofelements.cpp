#include<iostream>
using namespace std;

int maxsum(int arr[],int n){
    int curr = 0;
    int mtn = 0;
    for(int i =0; i<n; i++){
        curr += arr[i] ;
        mtn = max(curr,mtn);
        if(curr<0) curr = 0;
    }
    return mtn;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n ;i++){
        cin>>arr[i];
    }

   cout<< maxsum(arr,n);
}