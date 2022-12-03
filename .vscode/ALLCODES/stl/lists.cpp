#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> li ={1,2,3,4,5};
   
    list<int>::iterator itr = li.begin();
    li.push_back(5);
    for(itr=li.begin();itr!=li.end();++itr){
        cout<<*itr;
    }
}