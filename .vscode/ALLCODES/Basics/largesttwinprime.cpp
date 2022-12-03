#include<iostream>
using namespace std;


int twinprime(int n){
    int i=2;
    for(int i=2;i<=n/2;i++){
        if(n%i == 0)
            return 0;
    }
    // if(i>n/2){
    //     return 1;
    // }
}
int main(){
    int i,c=0,n=50;

    for(int i=2;i<=n;i++){
        if ( twinprime(i) && twinprime(i+2)){
            cout<<i<<" "<<i+2<<" ";
            c++;
        }
    }
    cout<<c<<endl;
    
}