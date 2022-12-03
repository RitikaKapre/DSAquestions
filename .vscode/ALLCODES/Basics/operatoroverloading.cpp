#include<bits/stdc++.h>
using namespace std;

class Time{
    private:
        int hours, minutes;

    public:
        Time(){
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m){
            hours = h;
            minutes = m;
        }

        void display(){
            cout<<"Time is "<<hours<<":"<<minutes<<endl;
        }

        Time operator ++(){
            ++minutes;
            if(minutes >= 60){
                minutes -= 60;
                ++hours;
            }
            return Time(hours, minutes);
        }

        Time operator ++(int){
            Time t(hours, minutes);
            ++minutes;
            if(minutes >= 60){
                minutes -= 60;
                ++hours;
            }
            return t;
        }

};

int main(){
    Time t(4,59);
    t.display();

    ++t;
    t.display();

    t++;
    t.display();

    return 0;
}