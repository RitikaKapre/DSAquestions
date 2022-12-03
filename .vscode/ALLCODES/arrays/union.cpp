// #include<iostream>
// using namespace std;

// int main(){
//     int n,k=3;
//     cin>>n;
//     int m = n;

//     int a[n],i=0,j=0;
//     int a1[3]={2,5,6};
//       for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     while(i<m &&j<k){
//         if(a[i]<a1[j]){
//             cout<<a[i]<<" ";
//             i++;
//         }
//         else if(a[i]>a1[j]){
//             cout<<a1[j]<<" ";
//             j++;
//         }
//         else{
//             cout<<a1[j]<<" ";
//             i++;
//             j++;
//         }

//     }
//     while(i<m){
//         cout<<a[i]<<" ";
//         i++;
//     }
//     while(j<k){
//         cout<<a1[j]<<" ";
//         j++;
//     }
// }

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
    int i=0,j=0,count=0;
    
    while(i<n &&j<m){
        if(a[i]<b[j]){
            count++;
            // cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j]){
            count++;
            // cout<<b[j]<<" ";
            j++;
        }
        else{
            count++;
            // cout<<b[j]<<" ";
            i++;
            j++;
        }

    }
    if(i<m){
    while(i<m){
        // cout<<a[i]<<" ";
        i++;
        count++;
    }
    }
    if(j<n){
    while(j<n){
        count++;
        // cout<<b[j]<<" ";
        j++;
    }
    }
    return count;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends



// C++ program for the union of two arrays using Set
#include <bits/stdc++.h>
using namespace std;
void getUnion(int a[], int n, int b[], int m)
{

	// Defining set container s
	set<int> s;

	// Inserting array elements in s
	for (int i = 0; i < n; i++)
		s.insert(a[i]);

	for (int i = 0; i < m; i++)
		s.insert(b[i]);
	cout << "Number of elements after union operation: "
		<< s.size() << endl;
	cout << "The union set of both arrays is :" << endl;
	for (auto itr = s.begin(); itr != s.end(); itr++)
		cout << *itr << " "; // s will contain only distinct
							// elements from array a and b
}

// Driver Code
int main()
{
	int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
	int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

	getUnion(a, 9, b, 10);
}

// contributed by Anirban Chand
