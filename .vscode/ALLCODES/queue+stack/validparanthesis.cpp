#include<iostream>
#include<stack>
using namespace std;

bool validparanthesis(string exp){
    stack<char> s;
    for(int i=0;i<exp.length();i++){
        char ch = exp[i];
        if(exp[i]=='(' || exp[i] =='[' || exp[i] == '{'){
            s.push(exp[i]);
        }
        else{
            if(s.empty()){
                return false;
            }
            else{
                char top = s.top();
                if((ch ==')' && top == '(' ) ||
                (ch=='}' && top== '{') ||
                (ch==']' && top=='[')){
                    s.pop();
                }
                else{
                    return false;
                }

            }

        }
        if(!s.empty()){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){


    string exp ;
    cin>>exp;
     validparanthesis(exp);
}