#include<iostream>
using namespace std;

class animal{
    private:
    string color;

    protected:
    string type;

    public:
    void eat(){
        cout<<"i can eat"<<endl;
    }
    void sleep(){
        cout<<"i can sleep"<<endl;
    }
    void setcolor(string clr){
        color = clr;
    }
    string getcolor(){
        return color;
    }
};
class dog:public animal{
    public:
    void settype(string tp){
        type = tp;
    }
    void displayinfo(string c){
        cout<<"im a"<<type<<endl;
        cout<<"my color is"<<c<<endl ;
    }
    void bark(){
        cout<<"i can bark"<<endl;
    }
};
int main(){
    dog dog1;

    dog1.eat();
    dog1.sleep();
    dog1.setcolor("black");

    dog1.bark();
    dog1.settype("mammal");

    dog1.displayinfo(dog1.getcolor());
}