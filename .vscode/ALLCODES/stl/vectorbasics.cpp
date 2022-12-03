#include<iostream>
#include<vector>

using namespace std;
  void display(int size,vector<int>vec ){
        for(int i=0;i<size;i++){
            cout<<vec[i]<<" ";
        }
  }
int main(){
    vector<int> vec;
    vector<int>vec1;

    // cout<<"size of created vector is "<<vec.size()<<endl;

    // cout<<"enter the size of vector"<<endl;
    // cin>>s1;
    // cin>>s2;
  
    // for(int i=0;i<s;i++){
    //     cout<<"enter element "<<i<<"of vector";
    //     cin>>element;
    //     vec.push_back(element);
    // }
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(5);

    vec1.push_back(9);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(5);
    vec1.push_back(8);
    vec1.push_back(3);
    //   void display(){
        // for(int i=0;i<size;i++){
        //     cout<<vec[i]<<" ";
        // }
// }
// display(size,vec);
// vector<int>::iterator v = vec.begin();
    
}
 