
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
    Node *temp = head, *prev = head;
    // Traverse list till the last node
    while (temp != NULL) {
        // Compare values of both pointers
        if (temp->data != prev->data) {
            // if the value of prev is not equal to the
            // value of temp that means there are no more
            // occurrences of the prev data-> So we can set
            // the next of prev to the temp node->*/
            prev->next = temp;
            prev = temp;
        }
        //Set the temp to the next node
        temp = temp->next;
    }
    // This is the edge case if there are more than one
    // occurrences of the last element
    if (prev != temp)
        prev->next = NULL;
    // return head;
 
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
