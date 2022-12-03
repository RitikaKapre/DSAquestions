
#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    void insertion();
    void display();
    bool detectLoop(Node* head);
};
Node *head;
void Node::insertion()
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
 
}
bool Node:: detectLoop(Node* head)
    {
        if(head==NULL){
            return false;
        }
        if(head->next == NULL){
            return false;
        }
        // your code here0
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return 1;
            }
            
        }
        return 0;
    
        // your code here
    }
void Node::display()
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
    Node n1;
    head = NULL;
    n1.insertion();
    n1.display();
     cout<<n1.detectLoop(head);
}