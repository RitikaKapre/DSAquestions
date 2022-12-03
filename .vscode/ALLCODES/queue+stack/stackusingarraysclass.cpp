#include<iostream>
using namespace std;

class stacks{
    public:
    int top;
    stacks(){
        top = -1;
    }
    int arr[100];
    void push(int size){
        int x;
        for(int i=0;i<size;i++){
            cin>>x;
            if(top >= (size-1)){
            cout<<"overflow";
            }
            else{
                arr[++top] = x;
            }
        }
    }
    int pop(){
        if(top<0){
            cout<<"underflow";
        }
        else{
            cout<<arr[top];
            top--;
        }
    }
    void display(){
        while(top!=-1){
            cout<<arr[top]<<" ";
            top--;
        }
    }

};
int main(){
    int size;

    cin>>size;
    stacks s;
    s.push(size);
    s.pop();
    s.display();
    // s.pop();

}