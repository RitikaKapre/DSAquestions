#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Get the vector
    vector<int> a = { 1, 45, 54, 71, 76, 12 };
  
    // Print the vector
    cout << "Vector: ";
  for(auto itr=a.begin();itr!=a.end();itr++){
      cout<<*itr<<" ";
  }
  
    // Find the max element
  int m1 = *max_element(a.begin(), a.end());

          vector<int> b = { 1, 2, 5,8,4,3 };
  
    // Print the vector
    cout << "Vector: ";
  for(auto itr=b.begin();itr!=b.end();itr++){
      cout<<*itr<<" ";
  }

 int  m2 = *max_element(b.begin(), b.end());

 if(m1>m2){
     cout<<"max ele is "<<m1;
 }
 else{
     cout<<m2;
 }
    return 0;
}