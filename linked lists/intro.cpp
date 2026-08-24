#include<iostream>
using namespace std;
class node{
    public : 
    int data ;
    node * next ;
    node(int val){
        data = val ;
        next = NULL ;
    }
};

class list { 
    node * head ; 
    node * tail ; 

    public : 
    list(){
        head = NULL ; 
        tail = NULL ;
    }

    void push_front(int value){
        node * newnode = new node(value) ; 
        if(head == NULL){
            head = tail = newnode ;
            return ;
        }
        else { 
            newnode->next = head ; 
            head = newnode ;
        }
    }

    void push_back(int value){
        node * newnode = new node(value) ; 
        if(head == NULL){
            head = tail = newnode ;
            return ;
        }
        else { 
            tail->next = newnode ; 
            tail = newnode ;
        }
    }

    void popfront(){
        if(head == NULL) return ;
        else {
            node * temp = head ; 
            head = head->next ; 
            temp->next = NULL ;
        }
    }
    void popback(){
        if(head == NULL) return ;
        else {
            node * temp = head ;
            while(temp->next != tail){
                // temp-> = tail when it is prvs from tail , therefore this loop will stop right before the tail 
                temp = temp->next ;
            }
            temp->next = NULL;
            // making temp (the prvs one) the tail
            delete tail ;
            tail =  temp ;
        }
    }
    void printLL(){
        node * temp = head ; 
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    list ll ; 

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.push_back(0);

    ll.printLL();

    ll.popfront();

    ll.printLL();

    ll.popback();

    ll.printLL();
    return 0;
}