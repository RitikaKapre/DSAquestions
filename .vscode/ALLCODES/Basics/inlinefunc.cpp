#include<iostream>
#include<algorithm>
using namespace std;


inline int maxs(int n1, int n2){
    return max(n1, n2);
     
}
int main(){

    int n1, n2;
    cin>>n1>>n2;
    cout<<maxs(n1,n2);
}