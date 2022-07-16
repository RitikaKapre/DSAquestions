#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=i-1;sp++){
            cout<<" ";
        }
        cout<<"*";
        for(int sp2=1;sp2<=n-i;sp2++){
            cout<<" ";
        }
        cout<<endl;
    }
}
