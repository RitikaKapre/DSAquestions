//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    
    int maxx = *max_element(arr, arr + size);
    int count = 0;
    for(int i=0;i<n;i++){

        if((maxx - arr[i]) == n ){
            count++;
        }
    }
        if(count>1){
            return true;
        }
        else{
            return false;
        }
    
    // return -1;
}