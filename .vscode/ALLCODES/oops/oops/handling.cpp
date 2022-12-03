#include<iostream>
using namespace std;

// class error{
//     int a;
//     public:
//     error(int b){
//         a = b;
//     }

//     void display(){
//         cout<<"error call"<<a<<endl;
//     }
// };
void display(int x){
    try{
        if(x<0){
            throw x;
        }
        else if(x == 0){
            throw 'x';
        }
        else{
            throw 1.0;
        }

    }
    catch(int x){
        cout<<"negative int ";
        throw;
    }
    catch(...){
        cout<<"reconsider";
    }
}
int main(){
    int x;
    cout<<"enter number ";
    cin>>x;

    // try{
    //     if(x<0){
    //         throw error(x);
    //     }else{
    //         cout<<"enjoy! input is okay"<<endl;
    //     }
    // }
    // catch(error e){
    //     e.display();
    // }
    try{
        display(x);

    }
    catch(int){
        cout<<"main func"<<endl;
    }
}