#include<iostream>
#include<vector>

using namespace std;
  void display(int size,vector<int>vec ){
        for(int i=0;i<size;i++){
            cout<<vec[i]<<" ";
        }
  }
int main(){
    int size,element;
    vector<int> vec;

    cout<<"size of created vector is "<<vec.size()<<endl;
    cout<<"enter the size of vector"<<endl;
    cin>>size;
  
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i<<"of vector";
        cin>>element;
        vec.push_back(element);
    }
    //   void display(){
        // for(int i=0;i<size;i++){
        //     cout<<vec[i]<<" ";
        // }
// }
display(size,vec);
vector<int>::iterator v = vec.begin();
    
}
 