#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> Emp;
    Emp[101]="nikiii";
    Emp[105]="john";
    Emp[103]="dolly";
    Emp[104]="deep";
    Emp[108]="aman";

    // cout<<Emp[104]<<endl;
   map <int,string>::iterator it;
      for(it = Emp.begin();it!=Emp.end();it++){
          cout<<(*it).first<<" "<<(*it).second<<endl;
      }
}