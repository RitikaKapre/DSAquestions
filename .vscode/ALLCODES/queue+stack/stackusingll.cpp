#include<iostream>
using namespace std;
class stack{
    public:
    int data;
    stack *next;
};
stack *top;
void push(int data){
    stack *temp = new stack();
    if(!temp){
        cout<<"stack overflow";
    }
    temp->data = data;
    temp->next = top;
    top = temp;

}
int isempty(){
    return top == NULL;
}
int peek(){
    if(!isempty()){
        return top->data;
    }
    else    
        return -1;
}
void pop(){
    stack *temp;
    if(top == NULL){
        cout<<"stack underflow";
        // return;
    }
    else{
        temp = top;
        top = top->next;
        delete(temp);

    }
}
void display(){
    stack *temp;
    if(top == NULL){
        cout<<"satck underflow";
        // return;
    }
    else{
        temp = top;
        while(temp != NULL){
            cout<<temp->data;
            temp = temp->next;
        }
    }
}
int main(){
    push(11);
    push(22);
    push(33);
    push(44);
    display();

}