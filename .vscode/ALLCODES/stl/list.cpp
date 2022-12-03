#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
    list<int> :: iterator it;
    for(it= l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> l;
    list<int> M;
    int s1,s2,element;

    cout<<"enter an element"<<endl;
    cin>>s1;


      cout<<"enter element ";
    for(int i=0;i<s1;i++){
      
        cin>>element;
        l.push_back(element);
    }
    cout<<"enter an element"<<endl;
    cin>>s2;


      cout<<"enter element ";
    for(int i=0;i<s2;i++){
      
        cin>>element;
        l.push_back(element);
    }
    // l.remove(2);

    // list<int>::iterator ir;
    // ir = M.begin();
    // *ir = 9;
    // ir++;
    // *ir = 5;
    // ir++;
    // *ir = 7;

 
    display(l);
    display(M);

    l.sort();
    M.sort();

    display(l);
    display(M);

    l.merge(M);
    display(l);

}