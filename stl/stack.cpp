#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s ;

    s.push(1) ;
    s.push(2) ;
    s.push(3) ;
    s.push(4) ;
    s.push(5) ;

    stack<int> s2 ; 
    s2.swap(s) ;
    // s is now empty 
    cout<<s.empty() <<endl; // 1 

    cout<<"Top : "<<s2.top()<<endl;
    
    s2.pop();
    
    cout<<"Top : "<<s2.top()<<endl;

    cout<<"Size : "<<s2.size()<<endl;

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    return 0;
}