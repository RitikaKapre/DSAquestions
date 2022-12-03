#include <iostream>
using namespace std;
class Queue
{

    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        int n;
        cin >> n;
        size = n;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            cout << "_" << endl;
            // return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            cout << ans << endl;
            //  return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(8);
    q.enqueue(12);

    //    cout<< q.dequeue()<<endl;
    //     cout<< q.dequeue()<<endl;
    //    cout<< q.dequeue()<<endl;
    //     cout<< q.dequeue()<<endl;
    //     cout<< q.dequeue()<<endl;
    q.dequeue();

    q.dequeue();

    q.dequeue();

    q.dequeue();
    q.dequeue();

    // cout<< q.dequeue()<<endl;
}