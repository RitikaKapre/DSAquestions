#include <iostream>
using namespace std;

class Node
{

    int data;
    Node *next;

public:
    void create();
    void disp();
    void merge();
};
Node *head;
void Node::create()
{
    cout << "enter the number of elments: ";
    int n, num;
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
            nn->data = num;
            temp->next = nn;
            temp = nn;
        }
    }
}
void Node::disp()
{
     Node *temp = head; // to prevent losing the ref of temp 1
    cout << "the elements are ";
    while (temp != NULL)
    {
   
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void Node::merge()
{

}

int main()
{
    Node l1,l2;
    l1.create();
}