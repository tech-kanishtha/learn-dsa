#include<iostream>
using namespace std;
struct node{
    int data ; 
    node * next ;
};
int main(){

    node * head = new node ; 
    node * second = new node ; 
    node * third = new node ; 

    head->data = 10 ; 
    second->data = 20 ; 
    third->data = 30 ;

    head->next = second ; 
    second->next = third ; 
    third->next = nullptr;

    int item; 

    cout<<"Enter element to search :";
    cin>>item ;

    node * ptr = head ; 
    int index = 0 ;

    while(ptr!=nullptr){

        if(ptr->data ==item ){

            cout<<"Element found "<<index ;
            return 0 ; 

        }
        ptr = ptr->next ; 
        index ++ ;

    }

    cout<<"not found" ;

    return 0;
}