#include<iostream>
using namespace std;


class Time{
    private:
    int hr,min,sec;
    public:
    void setTime(int x, int y, int z)
    {
        hr = x;
        min = y;
        sec = z;
    }
     void showTime()
    {
        cout << endl
             << hr << ":" << min << ":" << sec;
    }
      void normalize()
    {
        min = min + sec / 60;
        sec = sec % 60;
        hr = hr + min / 60;
        min = min % 60;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min;
        temp.hr = hr + t.hr;
        temp.normalize();
        return (temp);
    }
    

};
int main(){
    Time t1,t2,t3;
    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);
     t3 = t1 + t2;

     t3.showTime();


}



