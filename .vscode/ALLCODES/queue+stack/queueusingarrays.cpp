#include<iostream>
#include<bits/stdc++.h>
using namespace std;




class queues{
int * arr;
int front = -1;
int rear = -1;
int size;
public:
    void enqueue(int size){
        
        int x;
        cin>>x;
    if(rear == size-1){
        cout<<-1;
    }
    else{
        if(front == -1 && rear == -1){
            front =0;
        }
        rear++;
        arr[rear] = x;
    }
    }
    void dequeue(){
        int temp;
        if(front == -1 && rear == -1){
            cout<<-1;
        }
        else{temp = arr[front];
        if(front >= rear){
            front = rear = -1;
        }
        else{
            front++;
        }

    }
    }
    void display(){
        if( front == -1 && rear == -1){
            cout<<-1;
        }
        else{
            for(int i=front;i<= rear;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main(){
    queues q;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
    
        q.enqueue(size);
    }
    q.display();
    q.dequeue();
    q.display();
}