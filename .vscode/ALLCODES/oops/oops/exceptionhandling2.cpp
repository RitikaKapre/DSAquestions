#include<iostream>
using namespace std;

void display(int x){
    try{
        if(x<0){
            throw x;
        }
         if(x==0){
            throw 'x';
        }
         if(x>1){
            throw 1.0;
        }

    }
    catch(int x){
        cout<<"negative integer";
    }
       catch(char x){
        cout<<"character exception";
    }
       catch(double x){
        cout<<"positive integer";
    }
}
int main(){

    int x;

    cout<<"enter integer ";
    cin>>x;
    display(x);


}
