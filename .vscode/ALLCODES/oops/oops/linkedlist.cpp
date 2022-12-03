
#include<bits/stdc++.h>
using namespace std;

class LinkedL{
    public:
    int data;
    LinkedL *next;
    //LinkedL *head=NULL;
    LinkedL(int val){
        this->data=val;
        this->next=NULL;
    }

    LinkedL(){

    }

    void insertData(LinkedL* &head, LinkedL *&tail,int info){
        LinkedL *newNode=new LinkedL(info);
       
        if(head==NULL){
            head=newNode;
            tail=head;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    
    }

    void insertAtFront(LinkedL* &head, LinkedL* &tail,int info){
        LinkedL* newNode=new LinkedL(info);
        if(head==NULL){
            head=newNode;
            tail=head;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    void insertAtEnd(LinkedL* &head, LinkedL* & tail, int info){
        LinkedL* newNode=new LinkedL(info);
        if(head==NULL){
            head=newNode;
            tail=head;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }

        /*
        or
        LinkedL *start=head;
        while(start->next!=NULL){
            start=start->next;
        }
        start->next=newNode;
        */
    }

    void insertAfter(LinkedL* &head, LinkedL* &tail,int info, int val){
        LinkedL* newNode=new LinkedL(info);
        LinkedL* start=head;
        while(start->data!=val){
            start=start->next;
        }

        //check if it the last node
        newNode->next=start->next;
        start->next=newNode;

    }

    void display(LinkedL *&head){
        LinkedL* start=head;
        while(start!=NULL){
            cout<<start->data<<" ";
            start=start->next;
        }

      cout<<endl;
    }

    void replace( LinkedL *&head, int old, int new1){
        LinkedL *start=head;
        while(start->data!=old){
            start=start->next;
            if(start==NULL){
                return;
            }
        }
        start->data = new1;
    }

    void deleteNode( LinkedL *&head, int data){
        LinkedL* prev = head;
        LinkedL* start = head;

        while(start->data!=data){
            prev= start;
            start = start->next;
        }

        // if(start == NULL){
        //     cout<<"N/A"<<endl;
        //     return;
        // }

        prev->next= start->next;
        delete start;
    }

    void deleteFirst(LinkedL *&head){
        if(head == NULL){
            return;
        }

        LinkedL *start = head;
        head=head->next;

        delete start;
    }

    bool isPallindrome(LinkedL *&head){
        bool flag = 0;
        if(head == NULL){
            return 0;
        }

        LinkedL *start = head;
        LinkedL *prev = head;

        while(start != NULL){
            prev = start;
            start = start->next;
        }

    }

    void sorting(LinkedL *&head){
        LinkedL *start = head;
    }



};

int main(){
    LinkedL* head=NULL;  //points to the first node
    LinkedL* tail=head; //keeps track of the last node
  
    LinkedL obj;
    obj.insertData(head, tail, 4);
    obj.insertData(head, tail, 5);
    obj.insertData(head, tail, 6);
    
    //insert at front
    obj.insertAtFront(head, tail, 3);

    //insert at end
    obj.insertAtEnd(head, tail, 7);

    //insert at position
    obj.insertAfter(head, tail, 9, 3);
    obj.insertAfter(head, tail, 12, 7);
    
    //replace int with int
    obj.replace(head, 12, 8);

    //delete node
    obj.deleteNode(head, 5); //random no. not working

    //delete first Node
    obj.deleteFirst(head);

    //check Pallindrome
    obj.isPallindrome(head);

    //sort the given Linkedlist
    obj.sorting(head);

    //display
    obj.display(head);
    return 0;
}