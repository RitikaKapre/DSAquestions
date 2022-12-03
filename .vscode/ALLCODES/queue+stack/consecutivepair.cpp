// C++ program to check if successive
// pair of numbers in the queue are
// consecutive or not
#include <bits/stdc++.h>
using namespace std;

// Function to check if elements are
// pairwise consecutive in queue
bool pairWiseConsecutive(queue<int> q)
{
	// Fetching size of queue
	int n = q.size();

	// Pushing extra element to the queue
	// which acts as marker
	q.push(INT_MIN);

	// Result flag
	bool result = true;

	// If number of elements in the
	// queue is odd pop elements while
	// its size is greater than 2.
	// Else, pop elements while its
	// size is greater than 1
	if (n % 2 != 0) {

		while (n > 2) {
			int x = q.front();
			q.pop();
			q.push(x);
			n--;

			int y = q.front();
			q.pop();
			q.push(y);
			n--;

			if (abs(x - y) != 1) {
				result = false;
			}
		}

		// Popping the last element of queue
		// and pushing it again.
		// Also, popping the extra element
		// that we have pushed as marker
		q.push(q.front());
		q.pop();
		q.pop();
	}

	else {
		while (n > 1) {
			int x = q.front();
			q.pop();
			q.push(x);
			n--;

			int y = q.front();
			q.pop();
			q.push(y);
			n--;

			if (abs(x - y) != 1) {
				result = false;
			}
		}

		// popping the extra element that
		// we have pushed as marker
		q.pop();
	}

	return result;
}

// Driver program
int main()
{
	// Pushing elements into the queue
	queue<int> q;
	q.push(4);
	q.push(5);
	q.push(-2);
	q.push(-3);
	q.push(11);
	q.push(10);
	q.push(5);
	q.push(6);
	q.push(8);

	if (pairWiseConsecutive(q))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
