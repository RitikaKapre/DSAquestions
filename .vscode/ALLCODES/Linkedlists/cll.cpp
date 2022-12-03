#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void creation(int n);
    void disp();
    void insbeg();
    void insend();
    void inspos();
    void delele();
    bool ifc(int n); 
};
Node *head;
Node *tail; //stores address of first node

void Node::creation(int n)
{
    int num;
    cout << "enter number of elements ";

    Node *temp = new Node();

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (head == NULL)
        {

            temp->data = num;
            head = temp;
            // tail= temp;
        }
        else
        {

            Node *nn = new Node();
            nn->data = num;
            temp->next = nn;
            temp = nn;
            // tail = temp;
        }
    }
    if (temp->next == NULL)
    {
        temp->next = head;
    }
}
void Node::insbeg()
{
    cout << "enter value to be ins: ";
    int val;
    cin >> val;
    Node *nn1 = new Node();
    nn1->data = val;
    nn1->next = head;
    head = nn1;
}
void Node::insend()
{
    cout << "enter val ";
    int val;
    cin >> val;
    Node *temp = head;
    Node *nn1 = new Node();
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    nn1->data = val;
    temp->next = nn1;
}
void Node::inspos()
{
    int val, ind;
    cout << "enter val and ind ";
    cin >> val >> ind;
    Node *temp = head;
    for (int i = 0; i < ind; i++)
    {
        temp = temp->next;
    }
    Node *nn1 = new Node();
    nn1->data = val;
    nn1->next = temp;
    temp->next = nn1;
}
void Node::delele()
{
    cout << "enter the value to be deleted ";

    int val;
    cin >> val;
    Node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void Node::disp()
{
    int count;
    Node *temp = head; // to prevent losing the ref of temp 1
    cout << "the elements are ";
    while (temp->next != head)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
}

bool Node::ifc(int n)
{

    Node *temp = head;
    while (temp->next != NULL || temp->next != head)
    {
        temp = temp->next;
    }
    //  temp = temp->next;
    if (temp->next == head)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node l1;

    head = NULL;
    // tail = head; //list is empty
    int n;
    cin >> n;
    l1.creation(n);
    // l1.disp();
    // l1.insbeg();
    // l1.insend();
    // l1.inspos();

    // l1.delele();

    l1.disp();
    cout << l1.ifc(n);
}
