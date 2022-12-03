
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void creation();
    void disp();
    Node *getmid(Node *head);
    Node *rev(Node *temp);
    void ispalindrome();
};
Node *head, *head1; //stores address of first node
Node *Node::rev(Node *temp)
{
    Node *prev = NULL;
    Node *curr = temp;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

    // cout<<head->data;
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
Node *Node::getmid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void Node::ispalindrome()
{

    if (head == NULL){
    
        cout<<"true";
    }
    Node *middle = getmid(head);
    Node *temp = middle->next;
    middle->next = rev(temp);

    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            cout<<"false";
            return;
        }
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    middle->next=rev(middle->next);
    cout<<"true";
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

    head = NULL;
    // head1= NULL; //list is empty

    l1.creation();
    l1.disp();
    l1.ispalindrome();
}
