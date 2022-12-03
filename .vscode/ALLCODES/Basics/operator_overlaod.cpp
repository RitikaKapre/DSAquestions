#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
        
}
complex(int r, int i){
            real = r;
            img =i;
        }
        complex operator -(){
            real = -real;
            img = -img;
            return complex(real,img); 
        }
};
int main(){
    complex A(2,11);
    - A;
    A.display();
}