#include<iostream>
using namespace std;

class comp{

    int r,i;
    public:
    comp(int r ,int i){
        this->r = r;
        this->i = i;
    }
    void input();
    void display(){
        cout<<"imaginary part is "<<i<<endl;
    }
    friend void display(comp c);
   
};
 void display(comp c){
        cout<<"real part is: "<<c.r<<endl;
    }

int main(){
    comp A(2,3);
    A.display();
    display(A);
}