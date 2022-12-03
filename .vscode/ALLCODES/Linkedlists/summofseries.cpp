#include<iostream>
using namespace std;

int main(){
    int n,sum=1;
    cin>>n;
    int a[n];
    a[0] = sum;
   
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    for(int i=1;i<n;i++){
         sum=i+1+sum;
        a[i] = sum;
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}