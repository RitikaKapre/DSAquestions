#include<iostream>
using namespace std;

 int main(){
     int n1,n2,n3; 
     cin>>n1;
     int a[n1],b[n2],c[n1+n2];
     n3 = n1+n2;
     for(int i=0;i<n1;i++){
         cin>>a[i];
     }
     cin>>n2;
     for(int i=0;i<n2;i++){
         cin>>b[i];
     }
     for(int i=0;i<n1;i++){
        c[i]= a[i];
     }
    for(int i=0;i<3;i++){
        c[i] = b[i];
    }
    for(int i=0;i<n3;i++){
        cout<<c[i]<<" ";
     }
 }