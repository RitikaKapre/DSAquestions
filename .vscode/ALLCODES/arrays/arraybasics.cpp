#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
int sumofallelements(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int largestelement(int a[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int smallest(int a[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}
int evensum(int a[], int n){
    int even = 0;
    for(int i=0;i<n;i+=2){
        even +=a[i];
    }
    return even;
}
int oddsum(int a[],int n){
     int odd = 0;
    for(int i=1;i<n;i+=2){
        odd +=a[i];
    }
    return odd;
}
int sumofeven(int a[],int n){
    int esum=0;
    for(int i=0;i<n;i++){
        if((a[i]%2) == 0){
            esum+=a[i];
        }
    }
    return esum;

}
int sumofodd(int a[],int n){
      int osum=0;
    for(int i=0;i<n;i++){
        if((a[i]%2) != 0){
            osum+=a[i];
        }
    }
    return osum;
}
int Swap(int a[],int n){
    swap(a[0],a[n-1]);
    
}
void display(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int reference(int a[],int n){

}
bool ispalindrome(int a[],int n)
{
    for(int i=0;i<n/2;i++){
        for(int j=n-1;j>n/2;j--){
            if(a[i] != a[j]){
                return false;
            }
        }
    } 
    return true;


}

    int main()
{
    cout<<"enter number of elements ";
    int n;
    cin >> n;
    cout<<"enter elements ";
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // cout<<reverse(a, n);
    // int sum = sumofallelements(a, n);
    // cout<<"sum of all elements is "<<sum<<endl;
    // int average = (sum/n);
    // cout<<"average of all elements are "<<average<<endl;
    // cout<<"largest element is "<<largestelement(a,n);
    // cout<<"second largest element is "<<secondlargest(a,n)<<endl; .....................................
    // cout<<"smallest number "<<smallest(a,n)<<endl;
    // int Difference = (largestelement(a,n)-smallest(a,n));
    // cout<<"diff btween max and min is "<<Difference;
    // cout<<"sum of even is "<<evensum(a,n)<<" sum of odd is "<<oddsum(a,n);
    // cout<<"sum of even elements "<<sumofeven(  a,n)<<" sum of odd elements "<<sumofodd(a,n);
    // Swap(a,n);
    // cout<<reference(a,n); ..............................
    cout<<ispalindrome(a,n);


    // display(a,n);
}