#include <iostream>
using namespace std;

bool checkprime(int n)
{
    int sum=0;
    if(n<=1){
        return 0;
    }

    for(int i=2;i<=n;i++){
        if(n%i == 0){
            return 0;
        }
         sum +=i;
         cout<<i<<" ";
    }
    // cout<<sum;
}

int main()
{
    int n;
    cin >> n;
    // if (checkprime(n))
    // {
    //     cout << "yes";
    // }
    // else
    // {
    //     cout << "no";
    // }
    checkprime(n);
}