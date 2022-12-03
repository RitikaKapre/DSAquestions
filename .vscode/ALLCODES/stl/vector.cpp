#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class T>
class vectors
{
  
    int size;
    public:
      T* arr;
        vectors(int ar){
            size = ar;
            arr = new T(size);
        }
    T dotProduct(vectors &v){
        T d=0;
         for(int i=0;i<size;i++){
        d+=this->arr[i]*v.arr[i];
     }
     return d;
    }
     T sum(vectors &v){
        T d=0;
         for(int i=0;i<size;i++){
         d+=this->arr[i]+v.arr[i];
     }
     return d;
    }
};
int main(){
    vectors<double> v(3),w(3);
    cout<<"enter elements of first vector: "<<endl;
    cin>>v.arr[0];
    cin>>v.arr[1];
    cin>>v.arr[2];

    cout<<"enter elements of second vector: "<<endl;
    cin>>w.arr[0];
    cin>>w.arr[1];
    cin>>w.arr[2];
    // cout<<v.dotProduct(w)<<endl;
    cout<<v.sum(w)<<endl;
   
    return 0;
}
