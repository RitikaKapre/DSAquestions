#include <iostream>
#include <map>
using namespace std;

//we are given with numbers of queries, we have to return the values on the bases of the input value.
//e.g.-> 2 jerry 3-> jerry ke marks mein 2 add kar dena hai
// e.g.-> 2 jerry ->print the ouput

//1-> add
//2-> subtract
//3->multiply
//4->display

// class operator_loading{

// };

int main(){
    map<string, int> data;
    data["Jerry"]=0;
    data["Tom"] = 0;
    data["Hathori"] = 0;
    data["Doremon"] = 0;

    string name;
    cout << "Enter the name: ";
    cin >> name;

    int work_to_do;
    cout << "Choose the work_to_do:" << endl;
    cout << "1->add,2->subtract,3->multiply,4->display" << endl;
    cin >> work_to_do;

    switch(work_to_do){
        case 1:
            data[name] += 5;
            cout << data[name];
            break;
        case 2:
            data[name] -=5;
            cout << data[name];
            break;
        case 3:
            data[name] *=2;
            cout<<data[name];
            break;
        case 4:
            cout << "Total marks of " << name << ": " << data[name]<<endl;
            break;
        default:
            cout << "Wrong input!";
    }


    return 0;
}