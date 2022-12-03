#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int arr[5] = {23,11,67,4,0};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}