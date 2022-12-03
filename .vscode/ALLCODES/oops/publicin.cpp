#include<iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"i can eat"<<endl;
    }
    void sleep(){
        cout<<"i can sleep"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
int main(){
    dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
}