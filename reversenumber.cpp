#include<iostream>
using namespace std;

// int func(int num2,int mod,int num){
//     mod = num2%10;
//     // cout<<mod;
//     num = num2/10;
//     // cout<<mod;
//    func()

// }

int power(int x,int n){
    if(n!=0){
        return (x*power(x,n-1));
    }
    else{
        return 1;
    }

}
int reverse(int n){
    if(n<10){
        cout<<n;
        return n;
    }
   // int rem=n%10;
    cout<<n%10;
    reverse(n/10);
    //cout<<"hello";

     
 }
int main(){
    int x,n;
    cin>>x>>n;
    int ans=power(x,n);
    cout<<ans;

    //int num = 123456789;
    //int mod;
    //func(num,0,num);
    reverse(n);
  //  cout<<num;
  return 0;
    
}