 #include<iostream>
 #include<stack>
 using namespace std;

void insertatbottom(stack<int> &s ,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(num);

}
void insert(stack <int> &s, int x){

    insertatbottom(s,x);
}
void display(stack <int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
 int main(){

    stack<int> s;
    int n,x,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }
    cin>>ele;

    insert(s,ele);
    display(s);

 }