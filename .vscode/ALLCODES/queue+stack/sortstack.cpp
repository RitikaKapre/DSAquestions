

// C++ program to sort a stack using an
// auxiliary stack.
#include <bits/stdc++.h>
using namespace std;

// This function return the sorted stack
stack<int> sortStack(stack<int> &input)
{
	stack<int> tmpStack;

	while (!input.empty())
	{
		// pop out the first element
		int tmp = input.top();
		input.pop();

		// while temporary stack is not empty and top
		// of stack is greater than temp
		while (!tmpStack.empty() && tmpStack.top() > tmp)
		{
			// pop from temporary stack and push
			// it to the input stack
			input.push(tmpStack.top());
			tmpStack.pop();
		}

		// push temp in temporary of stack
		tmpStack.push(tmp);
	}

	return tmpStack;
}

// main function
int main()
{
	stack<int> st;

    // push elements into the stack
    int size, x;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        st.push(x);
    }
    

	// This is the temporary stack
	stack<int> tmpStack = sortStack(st);
	cout << "Sorted numbers are:\n";

	while (!tmpStack.empty())
	{
		cout << tmpStack.top()<< " ";
		tmpStack.pop();
	}
}
