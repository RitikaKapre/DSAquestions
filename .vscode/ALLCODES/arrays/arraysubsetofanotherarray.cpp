#include <bits/stdc++.h>
using namespace std;
 
/* Return 1 if arr2[] is a subset of arr1[] */
bool isSubset(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
 
    if (n< m)
        return 0;
 
    // Sort both the arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
 
    // Iterate till they do not exceed their sizes
    while (i < n && j < m) {
        // If the element is smaller then
        // Move ahead in the first array
        if (arr1[i] < arr2[j])
            i++;
        // If both are equal, then move
        // both of them forward
        else if (arr1[i] == arr2[j]) {
            j++;
            i++;
        }
 
        // If we do not have an element smaller
        // or equal to the second array then break
        else if (arr1[i] > arr2[j])
            return 0;
    }
 
    return (i < m) ? false : true;
}
 
// Driver Code
int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[] ");
 
    return 0;
}