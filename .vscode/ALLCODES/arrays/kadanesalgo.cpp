#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t,n;
    cin>>t;
    while(t>0){
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int sum =0;
      int maxi = a[0];
      for(int i=0;i<n;i++){
        sum = sum+a[i];
        maxi = max(maxi,sum);
         if(sum<0){
        sum =0;
      }
      }
     
      cout<<maxi;
   
    t--;
    }
    
    
    
    
    return 0;
  }