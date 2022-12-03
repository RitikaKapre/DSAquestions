#include<iostream>
using namespace std;

class displaydat{
    public:
    void display(int i){
        cout<<"displayin ginteger i"<<i<<endl;

    }
    void display(char c){
        cout<<"display char c"<<c<<endl;
    }
       void display(string s){
        cout<<"display string s"<<s<<endl;
    }
     void display(double d){
        cout<<"display double d"<<d<<endl;
    }
};
int main(){
    displaydat q;
    int i=3; 
    char c = 'e';
    string s="rats";
    double d=9.8;
    q.display(i);
}
