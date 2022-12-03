// Rearrange a given linkedlist such that all odd positioned nodes and even positioned nodes are together
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void creation();
    void disp();
    Node *rearrangeEvenOdd(Node *head);
};
Node *head; //stores address of first node
Node* Node::rearrangeEvenOdd(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    Node *odd = head;
    Node *even = head->next;
    Node *evenstart = even;
    while(1){
        if (odd== NULL|| even== NULL || even->next== NULL)
    {
        odd->next = evenstart;
        break;
        
    }
    odd->next = even->next;
    odd = even->next;

    if (odd->next == NULL)
    {
        even->next = NULL;
        odd->next = evenstart;
        break;
       
    }
    even->next = odd->next;
    even = odd->next;

    }
    return head;
}
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

    head = NULL; //list is empty

    l1.creation();
    l1.disp();
    l1.rearrangeEvenOdd(head);
    l1.disp();
}
