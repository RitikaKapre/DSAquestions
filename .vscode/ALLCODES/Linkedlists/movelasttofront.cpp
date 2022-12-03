#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
    void creation(int n);
    void disp();

    void movelasttofront();
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
void Node:: movelasttofront(){
    Node *last = head;
    Node *seclast = NULL;

    while(last->next != NULL){
        seclast = last;
        last= last->next;
    }
    seclast->next =NULL;
    last->next = head;
    head = last;


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
    l1.movelasttofront();
    l1.disp();
}