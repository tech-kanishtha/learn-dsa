#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d = {1 , 2 , 3 , 4 , 5};

    d.push_back(6);

    for(int val : d){
        cout<< val << " ";
    }

    cout<<endl ;

    cout<<d[3] <<endl;
    
    return 0;
}