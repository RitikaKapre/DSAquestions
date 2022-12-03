#include <iostream>
using namespace std;

class complexnumbers
{

private:
    int r;
    int i;
    int j;
    int k;

public:
    complexnumbers(int r, int i, int j = 0, int k = 0)
    {
        this->r = r;
        this->i = i;
        this->j = j;
        this->k = k;
    }

    complexnumbers operator+(complexnumbers c1)
    {
        complexnumbers temp(0, 0, 0, 0);
        temp.r = r + c1.r;
        temp.i = i + c1.i;

        return temp;
    }
    complexnumbers operator()(int a, int b, int c, int d)
    {
        complexnumbers temp(0, 0, 0, 0);
        temp.r = a + b + c;
        temp.i = b + c + d;
        return temp;
    }

    void print()
    {
        cout << r << "+i" << i<<endl;
    }
};

int main()
{
    complexnumbers c1(2, 3);
    complexnumbers c2(4, 5);
    complexnumbers c3(0, 0);
    //    c1.add(c2);

    c3 = c1 + c2;
    c3.print();
    complexnumbers c4(2, 3, 4, 5);
    c4 = c1 + c2 + c3;
    // c4.print();
}