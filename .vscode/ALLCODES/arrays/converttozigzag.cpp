// #include <bits/stdc++.h>
// using namespace std;

// void zigZag(vector<int>& arr, int N)
// {
// 	// sort the array by using the sort function
// 	sort(arr.begin(), arr.end());
// 	// traverse the array from 1 to N -1
// 	for (int i = 1; i < N - 1; i += 2) {
// 		// swap the current element with the next element
// 		swap(arr[i], arr[i + 1]);
// 	}
// 	// print the complete array
// 	for (int i = 0; i < N; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	return;
// }
// int main()
// {
// 	vector<int> arr = { 4, 3, 7, 8, 6, 2, 1 };
// 	int N = 7;
// 	zigZag(arr, N);
// 	return 0;
// }

#include <iostream>
using namespace std;
 
// Program for zig-zag conversion of array
void zigZag(int arr[], int n)
{
    // Flag true indicates relation "<" is expected,
    // else ">" is expected. The first expected relation
    // is "<"
    bool flag = true;
 
    for (int i = 0; i <= n - 2; i++) {
        if (flag) /* "<" relation expected */
        {
            /* If we have a situation like A > B > C,
            we get A > C < B by swapping B and C */
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        else /* ">" relation expected */
        {
            /* If we have a situation like A < B < C,
            we get A < C > B by swapping B and C */
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        flag = !flag; /* flip flag */
    }
}
 
// Driver program
int main()
{
    int arr[] = { 4, 3, 7, 8, 6, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    zigZag(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}