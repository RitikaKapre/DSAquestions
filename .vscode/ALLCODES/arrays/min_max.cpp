#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    int min = INT_MAX;
    int max = INT_MIN;

   for(int i=0;i<n;i++){
       cin>>a[i];
   }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<min){
            min = a[i];
        }
         if(a[i]>max){
            max = a[i];
        }
    }
   cout<<min<<" "<<max<<endl;
   cout<<max-min;
}