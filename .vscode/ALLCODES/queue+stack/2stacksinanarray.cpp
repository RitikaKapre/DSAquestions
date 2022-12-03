#include<iostream>
using namespace std;

class twostacks{
    public:
    int *arr;
    int top1,top2;
    int size;
    twostacks(int n){
        size = n*2;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
    void display();
};
void twostacks :: push1(int x){
    top1++;
    if(top1 == top2){
        return;
    }
    arr[top1] = x;
}
void twostacks :: push2(int x){
    top2--;
    if(top2 == top1){
        return;
    }
    arr[top2] = x;
}
int twostacks :: pop1(){
    if(top1 == -1){
        return -1;
    }
    else{
        int ans = arr[top1];
        top1--;
        return ans;
    }
}
int twostacks :: pop2(){
    if(top2 == -1){
        return -1;
    }
    else{
        int ans = arr[top2];
        top2++;
        return ans;
    }
}
void twostacks:: display(){
    while(top1 == -1){
       cout<< arr[top1];
       top1--;
    }
    while(top2 == size){
        cout<<arr[top2];
        top2++;
    }
}
int main(){
    
    int choice,size;
    cin>>choice;
    twostacks s(size);

    switch (choice)
    {
    case 1:
        /* code */
        int n;
        cin>>n;
        s.push1(n);
        break;
     case 2:
        /* code */
        s.pop1();
        break;
         case 3:
        /* code */
        cout<<"top of s1"<<s.top1;
        cout<<"top of s2"<<s.top2;
        break;
         case 4:
         void display();
        /* code */
        
        break;
    default:
        break;
    }
    cout << "Popped element from stack1 is "
         << s.pop1();
    s.push2(40);
    cout << "\nPopped element from stack2 is "
         << s.pop2();


}