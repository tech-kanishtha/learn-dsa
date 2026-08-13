#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a = {3 , 5 , 7 , 9} ; 
    cout<<"Size of vector = "<<a.size()<<endl;

    vector<char> b = {'a' , 'b' , 'c'};
    cout<<"Size of vector = "<<b.size()<<endl;

    vector<int> c ;
    cout<<"Size of vector = "<<c.size()<<endl;

    // pushback adds the element
    c.push_back(40);
    c.push_back(27);
    c.push_back(24);

    cout<<"Size of vector after push back = "<<c.size()<<endl;

    for(int i : c){
        cout<<i<<endl;
    }

    c.pop_back();
    // deletes the last element so we dont need to tell it the value 
    cout<<"Size of vector after pop back = "<<c.size()<<endl;

    cout<<c.front()<<endl;
    // prints the first value
    cout<<c.back()<<endl;
    // prints the last value
    cout<<c.at(1)<<endl;
    // same as cout<<c[0]<<endl;
    
    return 0;
}