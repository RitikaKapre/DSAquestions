#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int findmin(stack<int>&s,int count,int mini){
    while(s.top()>mini){
        s.pop();
        count++;
    }
    if(s.empty()){
        return count;
    }
mini = min(mini,s.top());
s.pop();
count++;
findmin(s,count,mini);

}
int main(){
    stack<int> st;
    int n, count=0,mini = INT_MAX;
    do{
        cin>>n;
        st.push(n);
        
    }while(n!=-1);
    findmin(st,count,mini);
    
}