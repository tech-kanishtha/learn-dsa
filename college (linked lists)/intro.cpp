#include<iostream>
using namespace std;
class node{
    public :
    int data ; 
    node * next ;
    node (int value){
        data = value ;
        next = nullptr ;
    }
};
int main(){
    node * head = new node (10); 
    //address of first node is stored in head 
    node * second = new node (20); 
    // address of second node is stored in second
    node * third = new node (30); 
    //  address of third node is stored in third
    node * temp = head ;
    // temporay variable that will help in traversing cz we cant move head 
    while ( temp!= nullptr ){

        head->next = second ; 
        // head node's address points to the second node's address
        second->next = third ;
        // head node's address points to the second node's address
        cout << temp->data << " -> ";
        temp = temp->next;
        // temp = second ; 
    }

    // cleans the allocated memory 
    delete head;
    delete second;
    delete third;

    return 0;
}