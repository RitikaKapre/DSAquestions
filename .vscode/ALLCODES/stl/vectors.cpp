// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     // vector<string> v1;
//      vector<int> v1;
//      int n,temp;
//      cin>>n;
//     // v1.push_back("java");
//     // v1.push_back("tut");
//     vector<int>::iterator itr = v1.begin();
//     // for(itr=v1.begin();itr!=v1.end();++itr){
//     //     cout<<*itr;
//     // }
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         v1.push_back(temp);

//     }
//     sort(v1.begin(),v1.end());
//     for(itr=v1.begin();itr!=v1.end();++itr){
//             cout<<*itr<<" ";
//         }
// }



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    vector<int> v1;
    int n,temp,x,y,z;
     vector<int>::iterator itr = v1.begin();
    // for(itr=v1.begin();itr!=v1.end();++itr){
    //     cout<<*itr;
    // }
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>temp;
        v1.push_back(temp);

    }
    

    cin>>x>>y>>z;
    v1.erase(v1.begin()+x);
    v1.erase(v1.begin()+y,v1.begin()+z);
    cout<<v1.size()<<endl;
     for(itr=v1.begin();itr!=v1.end();++itr){
            cout<<*itr<<" ";
        }
     
    return 0;
}
