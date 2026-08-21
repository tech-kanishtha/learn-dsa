#include<iostream>
using namespace std;

void change(int * a){
    *a = 20 ;
    // pass by ref
}

void changeA(int &c){
    c = 40 ;
    // psssing an alias
}

int main(){

    int a = 210 ;
    // cout<< &a <<endl;

    int * pointer = &a ;
    int ** ptr = &pointer ;

    cout<< pointer <<endl ;
    cout<< *pointer <<endl ;

    cout<< ptr <<endl;
    cout<< *ptr <<endl;
    cout<< **ptr <<endl;

    int * empty = NULL ;
    cout<< empty <<endl;
    
    change(&a);
    cout<<"Value of a is :"<< a<<endl ;

    int c = 30 ; 
    int &b = c ;
    
    changeA(b) ;
    cout<<"Value of c is :"<< c<<endl ;

    return 0;
}