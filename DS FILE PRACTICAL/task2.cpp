#include<iostream>
using namespace std;
int main(){
    int arr[100] , n , value , pos;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Elements of the array :";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // by value
    cout<<"Enter the element you wanna delete : ";
    cin>>value;
    int index = -1;
    for(int i = 0 ; i <= n-1 ; i++){
        if(arr[i]==value){
            index = i;
            break; }
    }
    if (index == -1) cout<<"Element not found";
    else { 
        for(int i = index ; i < n-1; i++){
            arr[i] = arr[i+1]; }
    }
    n--;
    cout<<"Array after deletion:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
    // by position
    cout<<"\nEnter the position of the element you wanna delete:";
    cin>>pos;
    if(pos<1||pos>n){
        cout<<"Invalid position";
    }
    else{
        for(int i = pos - 1; i < n-1 ;i++){
            arr[i] = arr[i+1];
        }
    }
    n--;
    cout<<"Array after deletion by position:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
    return 0;
}