#include<iostream>
using namespace std;

void divide(int x, int y){
    if(y !=0){
        int z=x/y;
        cout<<z;
    }
    else{
        throw(y);
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    // try{
    //     if(y != 0){
    //         int z= x*y;
    //         cout<<z;
    //     }
    //     else{
    //         throw y;
    //     }
       
    // }
    // catch(int y){
    //     cout<<"entered value should not be zero";
    // }
    try{
        divide(x,y);
    }
    catch(int x){
        cout<<"entered value should not be zero";
            }
}