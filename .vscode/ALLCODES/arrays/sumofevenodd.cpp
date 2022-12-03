#include<iostream>
using namespace std;

int main(){
    int n,e=0,o=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2 !=0 ){
            // cout<<"o"<<a[i]<<" ";
            o = o+a[i];
        }
        else{
            // cout<<a[i]<<" ";
            e =e+a[i];
        }
    }
    cout<<endl<<o<<" "<<e;
  
}