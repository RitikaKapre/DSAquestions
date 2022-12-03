#include<iostream>
#include<exception>

using namespace std;

class derivedexception : public exception{
    public:
    const char* what() throw(){
        return "exception ";
    }
};

int main(){
    derivedexception dev;
    try{
        throw dev;
    }
    catch(derivedexception &e){
        cout<<e.what()<<"Derived exception occured"<<endl;
    }
    catch(exception &e){
        cout<<e.what()<<"exception occured"<<endl;
    }
    return 0;

}