#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
     int r = ((n-1)+0)/2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2==0){
       
       cout<<(a[r]+a[r+1])/2;
    }
    else{
        cout<<a[r+1];
    }
}