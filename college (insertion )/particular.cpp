#include<iostream>
using namespace std;
void insert(int [], int , int , int) ;
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
    cout<<"Enter the element that uh would like to insert : ";
    cin >> target ;
    int a ; 
    cout<<"Enter the place where uh want to enter the element : ";
    cin>>a ;
    insert(arr, n, target, a);
    print(arr , n );
}
void insert(int arr[] , int n , int target , int a){
    for(int i = n-1; i> a ; i--){
        arr[i]=arr[i-1]; 
}
arr[a]= target;
}
void print (int arr[] , int n){
    cout<<"Array is:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
}