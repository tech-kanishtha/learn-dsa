#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){

    pair<int , int> p = { 1 , 3 };

    cout<< p.first<<endl;
    cout<< p.second<<endl;

    pair<int , pair<int , int>> p2 = {4 , {5 , 6}};

    cout<< p2.first<<endl;
    cout<< p2.second.first<<endl;    
    cout<< p2.second.second<<endl;    

    vector<pair<int , int>> vec = {{1 , 2} , {2 , 3} , {3 , 4}}; 

    for(pair<int , int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    vec.emplace_back(4 , 5); // directly makes a pair : no curly braces 
    vec.push_back({5 , 6}); // needs the argument to be the pair

    for(pair<int , int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}