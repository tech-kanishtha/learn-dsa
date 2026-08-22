#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1 , 2 , 3 , 4 , 5};

    cout<<"Vec begin : "<<*(vec.begin())<<endl;
    cout<<"Vec end : "<<*(vec.end())<<endl; // garbage value - 16580800 

    vector<int> kanu = {1 , 3 , 5 ,7 } ;
    vector<int> :: iterator it ;

    for(it = kanu.begin() ; it!= kanu.end() ; it++){
        cout<< *(it)<<" ";
    }

    cout<<endl; 

    vector<int>::reverse_iterator i; 
    for(i = kanu.rbegin() ; i!= kanu.rend() ; i++){
        cout<< *(i)<<" ";
    }

    // we can also use auto 
    return 0;
}