#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
       
        for(int j=1;j<=i-1;j++){
            cout<<"*";
        }
        //  for(int i=1;i<=n-i;i++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
      for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for (int k=1;k<=(n+1)-i;k++)
        {
            cout<<"*";
        }
        for(int l=1;l<=n-i;l++){
            cout<<"*";
        }
         cout<<endl;
    }
}