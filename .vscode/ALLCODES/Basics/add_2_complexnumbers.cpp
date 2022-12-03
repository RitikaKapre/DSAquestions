#include<iostream>
using namespace std;

class comp{
    private:
    int real;
    int img;
    public:
     void input();
     void addition(comp c1, comp c2);
     void subs(comp c1, comp c2);
     void mult(comp c1, comp c2);
     void display();
};


void comp::input(){
    cout<<"enter real part";
    cin>>real;
    cout<<"enter imaginary part";
    cin>>img;
}
 void comp::addition(comp c1, comp c2){
   comp r;
   r.real = c1.real+ c2.real;
   r.img = c1.img + c2.img;
    cout<<r.real<<" +i"<<r.img;
}
void comp::subs(comp c1, comp c2){
    comp r;
   r.real = c1.real- c2.real;
   r.img = c1.img - c2.img;
    cout<<r.real<<" +i"<<r.img;
}
void comp::mult(comp c1, comp c2){
 comp r;
   r.real = c1.real* c2.real;
   r.img = c1.img * c2.img;
    cout<<r.real<<" +i"<<r.img;

}
void comp::display(){
    cout<<real<<" + "<<img;
}

int main(){
    comp c1;
     c1.input();
    comp c2;
     c2.input();
    comp c3;
     c3.addition(c1,c2);
    c3.mult(c1,c2);
  

}