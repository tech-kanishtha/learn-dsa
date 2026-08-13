#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0 , product = 1 ; 
    for (int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<product<<endl;
    return 0;
}