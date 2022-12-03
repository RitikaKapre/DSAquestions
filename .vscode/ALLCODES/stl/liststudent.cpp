#include <iostream>
#include <list>
using namespace std;
class student
{
public:
    int roll_no;
    string sname;
    student(int r, string n)
    {
        roll_no = r;
        sname = n;
    }
};
void disp(list<student>phone_lit,int roll_no){
    for(int i=0;i<phone_lit.size();i++){
        if(phone_lit.front().roll_no== roll_no){
            cout<<phone_lit.front().sname<<endl;
            return;
        }
        
    phone_lit.pop_front();
    }
   
    cout<<"not present in the list";
    
}
int main()
{
    list<student> phone_lit;
    student s1(2051, "ritika");
    student s2(2064, "ruchita");
    student s3(111, "astitva");
    student s4(2079, "sam");

    phone_lit.push_back(s1);
    phone_lit.push_back(s2);
    phone_lit.push_back(s3);
    phone_lit.push_back(s4);

    
    disp(phone_lit,2051);

}
