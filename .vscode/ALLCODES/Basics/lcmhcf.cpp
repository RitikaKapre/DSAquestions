#include<iostream>
using namespace std;



int gcd(int a,int b){
    int result = min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
        result--;
    }
    return result;
}
int lcm(int a,int b){
    int result = max(a,b);
    while(1){
        if(result%a == 0 && result%b ==0){
            break;
        }
        result++;
    }
    return result;
}
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<gcd(a,b);
    cout<<lcm(a,b);
}