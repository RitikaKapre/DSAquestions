#include<iostream>
using namespace std;


class Integer{
  
    public:
      int x,y;
    Integer(){
        x=10;
        y=5;
    }
    
    ~Integer(){
        cout<<"object is destroyed";
    }

    void display(){
    cout<<"1st integer is "<<x<<endl;
    cout<<"2nd integer is "<<y<<endl;

}
 void add(){
    cout<<x+y<<endl;
    
}
};

int main()
{    Integer I;
     I.display();
     I.add();
}
