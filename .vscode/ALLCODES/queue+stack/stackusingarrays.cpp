#include <iostream>
#include <array>
using namespace std;
#define max 1000

class stacks
{

public:
    int top;

    stacks()
    {
        top = -1;
    }
    // bool push(int x);
    int arr[100];
    void push(int size);
    int pop();
    int peek();
    void display();
    void rev(int size);
    bool isempty();
};
void stacks::push(int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (top >= (n - 1))
        {
            cout << "stack overflow";
        }
        else
        {
            arr[++top] = x;
        }
    }
}
int stacks::pop()
{
    if (top < 0)
    {
        cout << "stack underflow";
    }
    int y = arr[top--];
    return y;
}
void stacks::display()
{
    while (top != -1)
    {
        int del_ele = pop();
        cout << del_ele << " ";
        ;
    }
}
void stacks::rev(int n){
    

}
int main()
{
    int size;
    cout << "enter the number of elements ";
    cin >> size;
    stacks s;
    s.push(size);
    // s.push(20);
    // s.push(60);
    // cout<<s.pop()<<endl;
    s.display();
    s.rev(size);
}