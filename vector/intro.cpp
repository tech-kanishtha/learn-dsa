// stl - std. template lib
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a ; //0 size
    vector<int> b = {1 , 2 , 3};
    vector<int> c(3 , 4); //3 is the size of the vector ans 4 is the value stored at each element
    vector<int> d(3 , 3);
    cout<<b[0]<<endl;
    cout<<"Vector-2"<<endl;
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;
    cout<<c[2]<<endl;
    for(int i : d){
        // i is the value not the index in vector - it is called th range based loop
        cout<<i<<endl;
    }
    return 0;
}