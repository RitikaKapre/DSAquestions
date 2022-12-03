// polymorphismmmmmmm
#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"base class"<<endl;
    }

};
class derived:public base{
    public:
    void display(){
        cout<<"derived class"<<endl;
    }
};

int main(){
    base b1;
    b1.display();
    derived d1;
    d1.display();
    base* baseptr = &b1;
    derived* derivedptr = &d1;
    baseptr->display();
    derivedptr->display();

    base* baseptr2 = &d1;
    baseptr2->display();

}