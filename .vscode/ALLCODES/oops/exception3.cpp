#include<iostream>
#include<exception>

using namespace std;

template<class T>

T maxx(T x, T y){ //3.1
    return(x>y)?x:y;
}
int maxx(int x, int y){ //1
    return(x>y)?y:x;
}
int main(){
   cout<<maxx(3.1,2.7)<<endl; // specified datatype matches with the int maxx fucntion
    cout<<maxx(6,1);

}