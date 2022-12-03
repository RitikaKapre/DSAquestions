// 2010992051- Ritika Kapre
#include <iostream>
using namespace std;

class Shape
{
protected:
    int w, l;
    public:
    Shape(int a, int b)
    {
        w = a;
        l = b;
    }
    virtual void area() = 0;
};
class Rectangle : public Shape
{
public:
    Rectangle(int a, int b):Shape(a,b){}
    
    void area()
    {
        cout << "area of triangle " << l * w << endl;
    }
};
class Triangle : public Shape
{
public:
    Triangle(int a,int b):Shape(a,b){ }
    void area()
    {
        cout << "area of triangle " << l * w / 2 << endl;
    }
};
int main()
{
    
    Triangle t(10, 20);
    Rectangle r(29, 30);
    Shape *shapeptr;
    shapeptr = &r;
    shapeptr->area();
}