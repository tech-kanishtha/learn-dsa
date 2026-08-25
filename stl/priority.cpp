#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max - heap
    // priority_queue<int> q ;  - output : 10 5 4 3

    // min - heap
    priority_queue<int , vector<int> , greater<int>> q ; // output : 3 4 5 10


    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}