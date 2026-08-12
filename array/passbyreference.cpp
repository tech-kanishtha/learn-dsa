#include<iostream>
using namespace std;

void arraychange(int arr[] , int n){
    
    cout<<"Fnctn called"<<endl;

    for(int i = 0; i < n; i++){

        arr[i] = 2*arr[i];

    }
}

// this is a pass by reference example as arrays do not behave like other variables and the compiler treats the int arr[] as int * arr which means as an address

int main(){

    int arr[] = {1 , 2 , 3};
    int n = 3 ;
    arraychange(arr , n);
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }

    return 0;

}