
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void creation(int n);
    void disp();
    void rev(int k,int n);
   
};
Node *head; //stores address of first node
void Node::rev(int k,int n){
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    for(int i=0;i<k;i++){
    // while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    // }
    // head = prev;
    }
    for(int i=n-k;i<n;i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
}

void Node::creation(int n)
{
    int  num;
    // cout << "enter number of elements ";
    // cin >> n;
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
    cout<<"enter an element ";
    int n;
    cin>>n;
    l1.creation(n);
    l1.disp();
    cout<<endl;
    int k;
    cin>>k;
    l1.rev(k,n);
    l1.disp();
    
}
