#include <iostream>
using namespace std;
#define n 5

class stack
{
    int *arr;
    int top = -1;

public:
    stack()
    {
        arr = new int[n];
    }
    void push(int ele)
    {
        if (top == n - 1)
        {
            cout << "stack overflo w ";
        }
        else
        {
            top++;
            arr[top] = ele;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "stack underflow ";
        }
        top--;
        return top;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "no top element present";
            return;
        }
        else
        {
            cout << arr[top]<<endl;
        }
    }
    bool isempty()
    {
        return top==-1;
    }
   
};

int main()
{
    stack s;
    s.push(2);
    // s.push(12);
    // s.push(0);
    cout<<s.pop();
    s.push(5);
    // s.push(10);
    cout<<" "<<s.pop();
}