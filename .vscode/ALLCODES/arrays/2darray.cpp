#include<iostream>
using namespace std;

int main(){

//  int arr[4][3]= {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//  int i,j;
//  for(i=0;i<4;i++){
//     for(j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
int i,j;
cin>>i>>j;
int a[i][j];
for(int k=0;k<i;k++){
    for(int l=0;l<j;l++){
        cin>>a[k][l];
    }
}
for(int k=0;k<i;k++){//i = 4
    for(int l=0;l<j;l++){
        cout<<a[k][l]<<" ";
    }
    cout<<endl;
}

    return 0;
}