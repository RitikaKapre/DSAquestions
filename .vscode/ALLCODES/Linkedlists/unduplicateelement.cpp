
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void creation(int n);
    void disp();
    void dup(int n);
};
Node *head; //stores address of first node

void Node::dup(int n)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *curr1 = curr->next;
    while(curr!=NULL){
    for (int i = 0; i < n ; i++)
    {
        while (curr1->next != NULL)
        {
            if (curr->data != curr1->data)
            {
                prev = curr1;
                curr1 = curr1->next;
            }
            else
            {
                prev->next = curr1->next;
                curr1 = curr1->next;
            }
        }
    }
    curr = curr->next;
}
}

void Node::creation(int n)
{
    int num;

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
int main()
{
    Node l1;
    int n;
    head = NULL; //list is empty
    cout << "enter number of elements ";
    cin >> n;
    l1.creation(n);
    l1.disp();
    l1.dup(n);
    l1.disp();
}
