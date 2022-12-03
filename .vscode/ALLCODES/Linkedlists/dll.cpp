#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *prev;
    Node *next;

public:
    void creation();
    void disp();
    void insbeg();
    void insend();
    void inspos();
    void delele();
};
Node *head; //stores address of first node

void Node::creation()
{
    int n, num;
    cout << "enter number of elements ";
    cin >> n;
    Node *temp = new Node();

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (head == NULL)
        {

            temp->data = num;
            head = temp;
        }
        else
        {

            Node *nn = new Node();
            nn->prev = temp;
            nn->data = num;
            temp->next = nn;
            temp = nn;
        }
    }
}
void Node::insbeg()
{
    cout<<"enter value to be ins: ";
    int val;
    cin>>val;
    Node *nn1 = new Node();
    nn1->data= val;
    nn1->next = head;
    head = nn1;


}
void Node::insend(){
    cout<<"enter val ";
    int val;
    cin>>val;
    Node *temp = head;
    Node *nn1 = new Node();
    while(temp->next != NULL){
        temp = temp->next;
    }
    nn1->data= val;
    nn1->prev = temp;
    temp->next = nn1;
    
}
void Node::inspos(){
    int val,ind;
    cout<<"enter val and ind ";
    cin>>val>>ind;
    Node *temp = head;
    for(int i=0;i<ind;i++){
        temp= temp->next;
    }
    Node *nn1 = new Node();
    nn1->data = val;
    nn1->prev = temp;
    nn1->next = temp->next;
  
   
      temp->next =nn1;
       temp->next->prev = nn1;
}
void Node::delele(){
    cout<<"enter the value to be deleted ";

    int val;
    cin>>val;
    Node *temp = head;

    while(temp->data != val){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->next;

}
void Node::disp()
{
    int count;
    Node *temp = head; // to prevent losing the ref of temp 1
    cout << "the elements are ";
    while (temp != NULL)
    {
   
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node l1;

    head = NULL; //list is empty

    l1.creation();
    l1.disp();
    // l1.insbeg();
    // l1.disp();
    // l1.insend();
    // l1.inspos();
    
    l1.delele();

    l1.disp();
}
