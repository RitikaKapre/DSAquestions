#include<iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout<<"A display"<<endl;
    }
};
class B : public A{
    public: 
    void display(){
        cout<<"b display"<<endl;
    }
};
int main(){
    A* ptr;
    A a;
    B b;
    ptr= &b;
    ptr->display();
}


#include<iostream>
using namespace std;

class Base
{
public:
	int fun() { cout << "Base::fun() called"; }
	int fun(int i) { cout << "Base::fun(int i) called"; }
};

class Derived: public Base
{
public:
	int fun() { cout << "Derived::fun() called"; }
};

int main()
{
	Derived d;
	d.fun(5);
	return 0;
}
