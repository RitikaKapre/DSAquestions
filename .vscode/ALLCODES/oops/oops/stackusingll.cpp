#include<iostream>
using namespace std;



class Node{
    public:
    Node *next;
    int data;
   
};
 bool empty(Node *&top){
        if(top == NULL){
            return 1;
        }
    }
    void push(Node*&top, int dat){
        if(!empty(top)){
            cout<<"stack overflow "<<endl;
            return;
        }
        else{
        Node *n = new Node();
        n->data = dat;
        n->next = top;
        top = n;
        }
    }
    void pop(Node *&top){
        if(empty(top)){
            cout<<"stack underflow "<<endl;
            return;
        }
        else{
        Node *n = top;
        top = top->next;
        delete n;
        }
    }
    void Top(Node *&top){
        if(empty(top)){
            cout<<"no element is stack ";
            return ;
        }
        else{
        cout<<"top element is "<<top->data<<endl;
        }
    }
  
int main(){
    Node *top;
    push(top,10);
    push(top,5);

    Top(top);

    push(top,2);



}