#include<iostream>
using namespace std;

class complex{
    public:
    int real,img;
    complex(int r, int i){
        real = r;
        img = i;
    }
    // complex operator +(complex d){
    //     complex temp(0,0);
    //     temp.real = real+d.real;
    //     temp.img = img+d.img;

    //     return temp;
    // }
      complex operator =(complex d){
       // complex temp(0,0);
      real = d.real;
        img = d.img;

        return complex(real,img);
    }
    void display(){
        cout<<real<<" "<<img;
    }
};

int main(){
    complex a(2,3);
    // complex b(0,4);
    complex c(0,0);
    // c=a+b;
    c=a;
    c.display();
}