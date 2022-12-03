#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
    void creation(int n);
    void disp();

    void addone();
};
Node *head = new Node();
void Node :: creation(int n){
    int num;
    Node *temp = new Node();
    for(int i=0;i<n;i++){
        cin>>num;
        if(head == NULL){
            temp->data = num;
            head = temp;
        }
        else{
            Node *nn = new Node();
            nn->data = num;
            temp->next = nn;
            temp = nn;

        }
    }
}
void Node:: addone(){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->data +=1;
}
void Node::disp(){
    Node *temp = head;
    cout<<"the elements are ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node l1;
    int n;
    cout<<"enter number of elements ";
    cin>>n;
    head = NULL;
    l1.creation(n);
    l1.disp();
    l1.addone();
    l1.disp();
}