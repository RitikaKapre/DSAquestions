#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(int r,int i)
    {
        real = r;
        img = i;
    }
    void display(){
        cout<<"my number is: "<<real<<"+"<<img<<"i"<<endl;
    }
    // operator rectangle(){
    //     rectangle temp(real,img);
    //         return temp;
        
    // }
        int getreal(){
        return real;
    }
    int getimg(){
        return img;
    }
};
class rectangle{
    int length, width;
    public:

    rectangle(complex c){
        length =c.getreal();
        width = c.getimg();
    }
    rectangle(int l,int w){
        length = l;
        width = w;
    }
    void print()
    {
        cout<<"lenth of rectangle is: "<<length<<endl<<"width of rectangle is: "<<width;
    }
};



int main(){
    complex A(2,3);
    rectangle B=A;
    A.display();
    B.print();
    return 0;
}