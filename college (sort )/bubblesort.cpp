#include<iostream>
using namespace std;
void bubble ( int arr[] , int n);
void print ( int arr[] , int n);
int main(){
    int n ; 
    cout<<"Enter the number of the elements : ";
    cin>> n ;
    int arr [n] ;
    cout<<"Enter the elements of the array : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    bubble(arr , n);
    print(arr , n);
    return 0;
}
void bubble ( int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if (arr[j] > arr[j+1]){
                int c = arr[j] ; 
                arr[j] = arr[j+1] ;
                arr[j+1] = c ;
            }
        }
    }
}
void print( int arr[] , int n){
    cout<<"Your array after sorting is : ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] <<" ";
    }
}