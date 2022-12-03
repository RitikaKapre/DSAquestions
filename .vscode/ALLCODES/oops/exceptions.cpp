
#include<exception>
#include <iostream>

using namespace std;

int main()
{
    try{
        int *ptr=new int[1000000000000000000];
    }
    catch(exception& e){
        cout<<e.what()<<" Exception occured";
    }
    return 0;
}