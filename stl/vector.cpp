#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1 , 4} , vec2(3,0) ;

    vec.push_back(5);
    cout<<vec.size()<<endl; 
    cout<<vec.capacity()<<endl;

    for ( int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;
    vec.pop_back();
    
    cout<<vec.at(1)<<endl; 
    cout<<vec.front()<<endl; 
    cout<<vec.back()<<endl ;

    vector<int> kanu = { 1 , 3 , 4 , 5};
    // kanu.erase(kanu.begin()+1); // second element

    kanu.erase(kanu.begin() , kanu.begin()+2); // deletes all the elements btw the interval (start is included , end is excluded)

    // erase -> we cant normally pass the index in it , we use iterators for it

    // here vec.begin () gives the address of the first element / points to the first element 

    for ( int val : kanu){
        cout<< val <<" ";
    }
    
    cout<<endl;
    kanu.insert(kanu.begin(), 1) ;
    kanu.insert(kanu.begin()+1, 2) ;
    kanu.insert(kanu.begin()+2, 3) ;

    for ( int val : kanu){
        cout<< val <<" ";
    }

    kanu.clear() ;

    cout<<"size "<<kanu.size()<<endl;
    cout<<"Capacity "<<kanu.capacity()<<endl;

    cout<<"Empty (1) or not(0) :"<<kanu.empty()<<endl; 
    
    return 0;
}