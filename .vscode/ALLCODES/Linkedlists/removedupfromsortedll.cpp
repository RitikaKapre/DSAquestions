#include<iostream>
using namespace std;


class Node{
    int data;
    Node *next;
    public:
    void removeduplicates();
    void creation();
    void display();



};
Node *head;
void Node::creation(){
    cout<<"Enter size of linkedlist ";
    int size,x;
    cin>>size;
    
    Node *temp = new Node();
    cout<<"enter elements ";
    for(int i=0;i<size;i++){
        cin>>x;
    if( head == NULL){
        temp->data = x;
        head = temp;
    }
    else{
        Node *nn = new Node();
        nn->data =x;
        temp->next = nn;
        temp = nn;
    }
}
}
void Node :: display(){
    Node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void Node::removeduplicates(){
    Node *temp = head;
    Node *prev = head;
    while(temp!=NULL){
        if(temp->data!=prev->data){
            prev->next = temp;
            prev = temp;
        }
        temp= temp->next;
        if(prev!=temp){
            prev->next = NULL;
        }
    }
}
int main(){

    Node n1;
    n1.creation();
    n1.display();
    n1.removeduplicates();
    cout<<"List after removing duplicates ";
    n1.display();
}