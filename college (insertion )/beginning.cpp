#include<iostream>
using namespace std;
void insert(int [], int , int) ;
void print(int [] , int);
int main(){

    int n ; 
    cout<<"Enter the size of the array uh want after insertion : ";
    cin>>n;
    int arr[n]; 
    cout<<"Enter elements of the array : ";
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    int target ;
    cout<<"Enter the element that uh would like to insert at the beginning : ";
    cin >> target ;
    insert(arr , n , target) ;
    print(arr , n);
    return 0;
}
void insert(int arr[] , int n , int target){
    for(int i = n ; i >=0 ; i--){
        arr[i] = arr[i - 1] ;
        arr[i - 1] = target ;
    }
}
void print (int arr[] , int n){
    cout<<"Array is:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
}