#include<iostream>
#include<climits>
using namespace std;

int minmax(int a[],int n){
    int min = INT_MAX,max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
     
     for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
     return  min,max;
   
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minmax(a,n);



}