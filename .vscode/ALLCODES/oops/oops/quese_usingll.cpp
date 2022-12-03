#include <iostream>
using namespace std;

class queue_ll
{
private:
    struct node
    {
        int data;
        node *next = NULL;
    };
    node *front;
    node *rear;

public:
    queue_ll()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int num);
    void dequeue();
    void display();
    bool isempty();
    int peek();
};
int main()
{
    queue_ll q;
    // int ele;
    // cout << "Enter the element: ";
    // cin >> ele;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.dequeue();
    q.dequeue();
    // q.dequeue();
    q.display();
    cout<<endl<<"Peek element is: "<<q.peek();
}
void queue_ll::enqueue(int ele)
{
    node *nn = new node;
    nn->data = ele;
    nn->next = NULL;
    if (front == NULL)
    {
        nn->data = ele;
        nn->next = NULL;
        front = nn;
        rear = nn;
    }
    else
    {
        node *nn1 = rear;
        nn1->next = nn;
        rear = nn;
    }
}
void queue_ll::dequeue()
{
    
    if( front == NULL){
        cout<<"Queue is empty ";
    }
    // int temp = front->data;
    //
    // front = front->next;
    node *n = front;
    front = front->next;
     cout << endl
         << "deleted element is: " << n->data << endl;
         delete n;


}

void queue_ll ::display()
{
    {
        struct node *ptr;
        ptr = front;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}
bool queue_ll::isempty()
{
    if (front == NULL)
        return true;
    else
    {
        return false;
    }
}
int queue_ll::peek(){
    return front->data;
}