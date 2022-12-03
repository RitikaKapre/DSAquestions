// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to insert an element
// at the bottom of a given stack
void insertToBottom(stack<int> S, int N)
{
    // Temporary stack
    stack<int> temp;

    // Iterate until S becomes empty
    while (!S.empty())
    {

        // Push the top element of S
        // into the stack temp
        temp.push(S.top());

        // Pop the top element of S
        S.pop();
    }

    // Push N into the stack S
    S.push(N);

    // Iterate until temp becomes empty
    while (!temp.empty())
    {

        // Push the top element of
        // temp into the stack S
        S.push(temp.top());

        // Pop the top element of temp
        temp.pop();
    }

    // Print the elements of S
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
}
void solve(stack<int> &St, int x)
{
    if (St.empty())
    {
        St.push(x);
    
    }
    else
    {
        int num = St.top();
        St.pop();
        solve(St, x);
        St.push(num);
    }
}
stack<int> pushatnottom(stack<int> &s,int x){
    solve(s,x);
    return s;
}

// Driver Code
int main()
{
    // Input
    stack<int> st;

    // push elements into the stack
    int size, x;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        st.push(x);
    }

    int N = 7;

    pushatnottom(st, N);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl;

   

    return 0;
}
