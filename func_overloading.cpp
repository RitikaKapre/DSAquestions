#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<a+b;
}
void add(double a, int b){
    cout<<a+b;
}
void add(double x, double y){
    cout<<x+y;
}
void add(int a, double b){
    cout<<a+b;
    }
    void add(int a, int b , int c){
        cout<<a+b+c;
    }
int main(){
    add(2,3,4);
    cout<<endl;
    add(2.5,6);
    cout<<endl;
    add(6,5.5);
    cout<<endl;
    add(10,20);
    cout<<endl;
}