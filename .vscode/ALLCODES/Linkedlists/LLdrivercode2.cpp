#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;

}

void reverse(Node *head){
    
Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr; 
        curr = next;
    }
    head = prev;
}



int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
    reverse(head);
    printlist(head);
	return 0;
}