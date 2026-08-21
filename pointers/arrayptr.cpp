#include<iostream>
using namespace std;

int main(){

    int a = 20 ;
    int arr[] = { 5 , 6 , 7 , 8 };

    // arr = &a ; it shows an error as the name of pointer is a constant ptr in c++

    cout<< *arr << endl ;
    cout<<*(arr + 1)<< endl ;
    // as pointers increases by the size of the data type - arr increases by 4 too so if the address of the 0 index is 100 , 1st is 104 ans so on : after writing arr + 1 we mwant that 100 + 4 = 104 so we got 6

    cout<< *arr - *(arr + 2) << endl ; // -2 
    // bytes difference -8 bytes 
    // element count = - total bytes / size of datatype = 8 / 4 = 2 (negative)

    return 0;
}