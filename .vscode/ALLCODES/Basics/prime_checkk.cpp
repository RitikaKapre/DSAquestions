#include<iostream>
using namespace std;

bool isprime(int n){
    int sum =0;
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
    if(isprime(i)){
        cout<<i;
    }
    // else{
    //     cout<<"false";
    // }
    }
}