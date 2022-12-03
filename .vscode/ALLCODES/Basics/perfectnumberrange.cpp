
#include<iostream>
using namespace std;
int main()
{
    int range1,range2;
    cout<<"Enter a range:";
    cin>>range1>>range2;
    cout<<"Perfect numbers between "<<range1<<" and "<<range2<<" are:";
    for(int j=range1;j<=range2;j++)
    {
    int num=j;
    int sum=0;
    for(int i=1;i<j;i++)
    {
        if(j%i==0)
        {
            sum=sum+i;
        }
    }

   if(sum==num)
     cout<<j<<" ";
}
}