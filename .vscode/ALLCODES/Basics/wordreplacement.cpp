#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s="ram loves riya";
    // cin>>s;
    string str ="sam";
    
    // cin>>str;
    int index;
    while((index = s.find(str))!= string::npos){
        s.replace(index,str.length(),str);
    }
    cout<<s;

//    #include<bits/stdc++.h>
// using namespace std;

//  int main()
// {
//     string s,s1,s2;
//       cin>>s;
      
//       cout<<"Enter the word to be replaced"<<endl;
//         cin>>s1;
        
//        cout<<"Enter the word to which it should be replaced"<<endl;
//          cin>>s2;
         
//          cout<<"Sentence before replacing :"<<endl;
         
//            cout<<s<<" ";
           
//            while(cin>>s)
//            {
//                cout<<s<<" ";
//            }
           
//            cout<<"Sentence after replacing :";
      
//       if(s==s1)
//       cout<<s2<<" ";
      
//       else
//         cout<<s<<" ";
      
//       while(cin>>s)
//       {
//            if(s==s1)
//           cout<<s2<<" ";
          
//           else
//             cout<<s<<" ";
//       }
     
}