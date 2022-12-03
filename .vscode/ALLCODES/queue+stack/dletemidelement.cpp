#include<iostream>
#include<stack>
using namespace std;

void getmid_main(stack<int> &s,int size,int count){
    if(count == size/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    getmid_main(s,size,count+1);
    s.push(num);
}
void getmid(stack <int> &s, int size){
    int count =0;
    getmid_main(s,size,count);
}
void display(stack<int>s){
     while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main(){
    stack<int> s;
    int size,x;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>x;
        s.push(x);
    }
    display(s);
    getmid(s,size);
    display(s);
    
    
}