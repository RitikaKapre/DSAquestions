#include <iostream>
using namespace std;

class minhrs
{
    int mins, hrs;

public:
    void display()
    {
        cout << "time is " << hrs << ": " << mins << endl;
    }
    minhrs()
    {
        hrs = 0;
        mins = 0;
     
    }
       minhrs(int h, int m)
    {
        // h = hrs;
        // m = mins;
        mins = m;
        hrs = h;
     
    }
    // minhrs operator++()
    // {
    //     ++mins;
    //     if (mins >=60)
    //     {
    //         ++hrs;
    //         mins -= 60;
    //     }
    //     return minhrs(hrs,mins);
    // }
     minhrs operator++()
    {
        minhrs M(hrs,mins);
        ++mins;
        if (mins >=60)
        {
            ++hrs;
            mins -= 60;
        }
        return minhrs(hrs,mins);
    }
};
int main()
{
    minhrs A(11,59); minhrs B(11,40);
    ++A;
    A.display();
   
}