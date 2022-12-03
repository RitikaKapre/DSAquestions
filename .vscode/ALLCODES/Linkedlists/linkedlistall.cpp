#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    void insertion();
    void display();
    Node *rev(Node *head);
    Node *getmid();
    bool isPalindrome();
    Node *mergeSort(Node *head);
    Node *merge(Node *left, Node *right);
};
Node *head;
void Node::insertion()
{
    int n, num;
    cout << "enter number of elements ";
    cin >> n;
    Node *temp = new Node();
    cout << "enter elements of the ll ";
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
Node *Node::rev(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
Node *Node::getmid()
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
bool Node::isPalindrome()
{

    if (head == NULL)
    {
        return true;
    }
    Node *middle = getmid();
    Node *temp = middle->next;
    middle->next = rev(temp);

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
    middle->next = rev(middle->next);
    return true;
}
Node *Node::merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    Node *ans = new Node();
    Node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
Node *Node::mergeSort(Node *head)
{

    // your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *mid = getmid();
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);

    right = mergeSort(right);

    Node *result = merge(left, right);
    return result;
}
int main()
{
    Node n1;
    head = NULL;
    n1.insertion();
    n1.display();

    cout<<n1.getmid();
    // n1.rev();
    n1.display();

    cout << n1.isPalindrome();

}