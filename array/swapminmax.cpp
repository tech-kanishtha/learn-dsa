#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int min = 0 , max = 0 ;
    cout<<"Array is:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0 ; i < n ; i++){
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    for (int i = 0 ; i < n ; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
        swap(arr[min], arr[max]);
    cout<<"Array is:";
    for(int i = 0 ; i < n ; i ++){
    cout<<arr[i]<<" ";
    }
    return 0;
}