#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
        int maxvalue = 0 ; //or int max = INT_MIN ;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] < arr[maxvalue]){
            maxvalue = i ;
        }
    }
            cout<<"Maximum value is : "<<arr[maxvalue] ;
    return 0;
}