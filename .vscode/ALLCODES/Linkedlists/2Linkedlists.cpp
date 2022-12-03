#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    Node* insertion(Node *head);
    void display(Node *head);
};
Node *head;
Node *head1;
Node *head2;
Node* Node::insertion(Node *head)
{
 int n, num;
    cout << "enter number of elements ";
    cin >> n;
    Node *temp = new Node();
    cout<<"enter elements of the ll ";
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
 return head;
}
void Node::display(Node *head)
{
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
    Node n1,n2 ;
    head1 = NULL;
    head2 = NULL;
    head1=n1.insertion(head1);
    n1.display(head1);
    cout<<endl;

    head2=n2.insertion(head2);
    n2.display(head2);
}