#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin>>num;
    int first=0,second=1;
    for(int i=1;i<num;i++){
        // cout<<sum;
        if(i==1){
            cout<<first<<",";
        }
        if(i==2){
            cout<<second<<",";
        }
        sum = second +first;
        first = second;
        second =sum;
        cout<<sum<<",";
    }

    return 0;
}