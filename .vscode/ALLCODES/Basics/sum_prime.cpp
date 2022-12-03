#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void findprime(int n){
    int sum =0;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            sum = sum +i;
        }
    }
    cout<<sum;
}
int main(){
int n;
cin>>n;
findprime(n);
}