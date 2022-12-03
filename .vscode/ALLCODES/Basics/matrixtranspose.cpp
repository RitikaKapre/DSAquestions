#include<iostream>
using namespace std;

int main(){
    int n1,m1;
    cin>>n1>>m1;
    int a[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++)
         cin>>a[i][j];
    }

   for(int i=0;i<n1;i++){
       for(int j=i+1;j<m1;j++)
       if(a[i][j]<a[j][i])
        swap(a[i][j],a[j][i]);
   }

 for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
         cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}