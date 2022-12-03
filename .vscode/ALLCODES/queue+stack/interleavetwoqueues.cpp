#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interleave(queue<int> q)
{
    if (q.size() % 2 != 0)
    {
        cout << "Input even number of integers." << endl;
    }
    stack<int> s;
    int halfsize = q.size() / 2;

    for (int i = 0; i < halfsize; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < halfsize; i++)
    {
        q.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int> q;
    int size, x;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        q.push(x);
    }
    interleave(q);
    int length = q.size();
    for (int i = 0; i < length; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}
