#include<iostream>
#include<queue>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool pairwiseconsecutive(queue<int> q,int size){
    int n = q.size();
    q.push(INT_MIN);
    bool result = true;

    if(n%2!=0){
        while(n>2){
            int x = q.front();
            q.pop();
            q.push(x);
            n--;

            int y = q.front();
            q.pop();
            q.push(y);
            n--;

            if(abs(x-y) != 1){
                result = false;
            }
        }

    }

}
int main(){
  queue<int> q;
  int size,x;
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>x;
    q.push(x);
  }

  if(pairwiseconsecutive(q,size)){
    cout<<"yes";

  }
  else{
    cout<<"no";
  }
}