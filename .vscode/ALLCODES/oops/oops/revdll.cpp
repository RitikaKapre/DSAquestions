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
    
    void rev();
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

void Node::rev(){
      Node *ptr=NULL;
    Node *temp = head;
  
    while(temp != NULL){
        ptr = temp->prev;
        temp->prev = temp->next;
        temp->next = ptr;
        temp = temp->prev;
    }

    head = ptr->prev;
}
int main()
{
    Node l1;

    head = NULL; //list is empty

    l1.creation();
    l1.disp();
    l1.rev();

    l1.disp();
}
