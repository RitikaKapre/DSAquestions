
#include <iostream>
using namespace std;

int subarraysum(int a[], int n, int k)
{
    int currentsum = a[0], start = 0;
    for (int i = 1; i <= n; i++)
    {
        while (currentsum > k && start < i - 1)
        {
            currentsum = currentsum - a[start];
            start++;
        }

        if (currentsum == k)
        {
            cout << start << " " << i - 1;
            return 1;

            //  start+1, i
        }

        if (i < n)
        {
            currentsum = currentsum + a[i];
        }
    }
    cout << "no subarray found";

    return 0;
}
int main()
{
    int n, k;
    cin >> n ;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>k;
    subarraysum(a, n, k);
}