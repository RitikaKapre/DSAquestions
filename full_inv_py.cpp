#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
         for(int j=0;j<=i-1;j++){
            cout<<" ";
        }
        for(int st=0,k=0;st<=n*2-k;st++){
            cout<<"*";
            k+=2;
        }
        
      
        
        cout<<endl;
    }
}
// #include <iostream>
// using namespace std;



// int main()
// {
//     cout<<"Enter the number of rows";
//     int rows;
//     cin>>rows;
//     for (int i=1;i<=rows;i++)
//     {
//         for (int j=1;j<=i-1;j++)
//         {
//             cout<<" ";
//         }
//         for (int k=1;k<=(rows+1)-i;k++)
//         {
//             cout<<"*";
//         }
//         for(int l=1;l<=rows-i;l++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }
   
// }