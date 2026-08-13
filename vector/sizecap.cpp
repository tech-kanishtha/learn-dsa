#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a ; 
    a.push_back(20); 
    a.push_back(40); 
    a.push_back(60); 
    cout<<"Size = "<<a.size()<<endl; // 3
    cout<<"Capacity = "<<a.capacity()<<endl; // 4
    return 0;
}