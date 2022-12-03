#include <iostream>
using namespace std;
class complex
{
    private :
    int r;
    int i;
    public:
    
    complex(int r,int i){
        this->r = r;
        this->i = i;
    }
    void add( complex c1){
        cout<<c1.r+r<<" +i"<<c1.i+i;

    }
     complex operator +(complex c1){
        complex temp(0,0);
        temp.r = r+c1.r;
        temp.i = i+c1.i;

        return temp;
     }
    void print(){
        cout<<r<<"+i"<<i;
    }

};

int main()
{
   complex c1(2,3);
   complex c2(2,3);
   complex c3(0,0);
//    c1.add(c2);

    c3 = c1+c2;
       c3.print();    


}