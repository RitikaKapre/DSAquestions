#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<"*";
            }
            cout<<" ";
        }

        for(int j =n-2; j>=0; j--){
            if(i==j){
                cout << "*";
            }
            cout<<" ";
        }
        cout<<endl;

    }
}