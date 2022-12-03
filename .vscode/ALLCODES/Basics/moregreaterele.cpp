#include<iostream>
using namespace std;
// Pick elements one by one and
    // count greater elements. If
    // count is more than 2, print
    // that element.

void finder(int arr[],int n){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                count++;
            }
        }
        if(count>=2){
            cout<<arr[i]<<" ";
        }
    
    
    
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    finder(a,n);

}