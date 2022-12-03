#include <iostream>
using namespace std;

class Integer{

    int x;
    public:
    void display(){
        cout<<"the number is "<<x<<endl;
    }
    Integer(int x){
        this->x = x;
    }
    operator int(){
        return x;
    }
};
int main(){
    Integer i =50;
    i.display();
    int y =i;
    cout<<"the value of y"<<y;
}