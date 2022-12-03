#include <iostream>

using namespace std;

class twostack{
    public:
  int *arr;
  int size;
  int top1,top2;
  twostack(int size){
      this->size=size;
      arr=new int[size];
      top1=-1;
      top2=size;
  }
  void print(){
      for(int i=0;i<10;i++){
        cout<<arr[i]<<' ';
    }
  }
  void push1(int data){
      if(top1>0){
          top1--;
          arr[top1]=data;
      }
      else{
          cout<<"Stack Overflow in Stack 1"<<endl;
      }
  }
  void push2(int data){
      if(top2<size-1){
          top2++;
          arr[top2]=data;
      }
      else{
          cout<<"Stack Overflow in Stack 2"<<endl;
      }
  }
  void pop1(){
      if(top1<size/2){
          cout<<"Popped "<<arr[top1]<<endl;
          top1--;
      }
      else{
          cout<<"Stack Underflow "<<endl;
      }
  }
  
  void pop2(){
      if(top2<size/2-1){
          cout<<"Popped "<<arr[top2]<<endl;
          top2--;
      }
      else{
          cout<<"Stack Underflow "<<endl;
      }
  }
  void Top(){
      cout<<"Top element in stack 1"<<arr[top1]<<endl;
      cout<<"Top element in stack 2"<<arr[top2]<<endl;
  }
};






int main()
{
    twostack a(10);
    a.push1(1);
    a.push1(2);
    a.push1(3);
    a.push1(4);
    a.push1(5);
    a.push2(100);
    a.push2(200);
    a.push2(300);
    a.push2(400);
    a.push2(500);
    a.print();
    return 0;
}