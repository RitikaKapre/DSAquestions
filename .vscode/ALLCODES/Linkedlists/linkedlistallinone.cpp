#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{

    int data;
    Node *next;

public:
    void create();
    void display(Node *res);
    Node *findmid(Node *head);
    Node *reverse(Node *temp);
    bool ispalindrome();
    void sortedduplicate();
    Node *detectloop(Node *head);
    Node *getstartingnode(Node *head);
    void removeloop(Node *head);
    Node* Mergesort(Node *temp);
    Node* Merge(Node *head1,Node *head2);
    void unsorteddups(Node *head);
    void rearrange();
};
Node *head;

void Node::unsorteddups(Node *head){
    Node *curr = head;
    Node *prev = NULL;

    unordered_set<int> seen;
    while(curr!= NULL){
        if(seen.find(curr->data)!= seen.end()){
            prev->next = curr->next;
            delete(curr);
        }
        else{
            seen.insert(curr->data);
            prev = curr;
        }
        curr = curr->next;
    }
//  return head;
}
Node *Node ::Merge(Node * left, Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node *ans = new Node();
    Node *temp = ans;

    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
        if(left !=NULL){
        temp->next = left;
            temp = left;
            left= left->next;
        }
        if(right!=NULL){
            temp->next = right ;
            temp = right;
            right = right->next;
        }
        ans = ans->next;
        return ans;

    
}
Node* Node::Mergesort(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *mid = findmid(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = Mergesort(left);
    right = Mergesort(right);

    Node *result = Merge(left,right);
    return result;

}
Node *Node::detectloop(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return 0;
}
Node *Node ::getstartingnode(Node *head)
{

    Node *intersection = detectloop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
        /* code */
    }
    return slow;
}
void Node::removeloop(Node *head)
{

    if (head = NULL)
    {
        // return NULL;
    }
    Node *startingpoint = getstartingnode(head);
    if (startingpoint == NULL)
    {
        // return head;
    }
    Node *temp = startingpoint;
    while (temp->next != startingpoint)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    }
void Node::sortedduplicate()
{
    Node *prev = head;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data != prev->data)
        {
            prev->next = temp;
            prev = temp;
        }
        temp = temp->next;
    }
    if (prev != temp)
    {
        prev->next = temp;
    }
}
bool Node::ispalindrome()
{
    if (head == NULL)
    {
        return true;
    }
    Node *middle = findmid(head);
    Node *temp = middle->next;
    middle->next = reverse(temp);

    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    middle->next = reverse(middle->next);
    return true;
}
Node *Node::reverse(Node *temp)
{
    Node *curr = temp;
    Node *prev = NULL;
    Node *nextnode;
    while (curr != NULL)
    {
        nextnode = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextnode;
    }
    return prev;
}
Node *Node::findmid(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // cout<<slow->data;
    return slow;
}
void Node::create()
{
    cout << "enter size of ll ";
    int n, x;
    cin >> n;
    Node *temp = new Node();
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (head == NULL)
        {
            temp->data = x;
            head = temp;
        }
        else
        {
            Node *nn = new Node();
            nn->data = x;
            temp->next = nn;
            temp = nn;
        }
    }
}
void Node::display(Node *res)
{
    Node *temp = res;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void Node::rearrange(){

}


int main()
{
    Node n;
    n.create();
    n.display(head);
    cout << endl;
    // n.findmid();
    // n.reverse();
    // n.display(head);
    // cout<<n.ispalindrome();
    // n.sortedduplicate();
    // Node *res= n.Mergesort(head);
    // n.unsorteddups(head);
    n.rearrange();
    n.display(head);

}