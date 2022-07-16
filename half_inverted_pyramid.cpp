#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int st =0;st<n-i;st++){
            cout<<"*";
        }
        for(int sp=i; sp<n;sp++){
            cout<<" ";
        }
        cout<<endl;

    }
}