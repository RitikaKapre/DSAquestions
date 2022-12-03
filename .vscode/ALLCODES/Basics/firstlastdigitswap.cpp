#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  there are some problem in this code kindly recheck


int main(){
    int f,l,c,n,a,b,swpno;
    cin>>n;
    
    l = n%10;
    // cout<<l<<" ";
    c = log10(n);
    // cout<<c<<" ";
    f = n/pow(10,c);
    // cout<<f<<" ";
    a = f*(pow(10,c));
    // cout<<a<<" ";
    b = n%a;
    // cout<<b<<" ";
    n = b/10;
    // cout<<n<<" ";
    // cout<<pow(10,c);

    swpno = l*(pow(10,c))+(n*10+f);
   
    cout<<f<<" "<<l<<" ";
    cout<<swpno;
}