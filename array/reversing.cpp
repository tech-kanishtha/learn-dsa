#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5};
    int size = 5 ;
    int low = 0 , high = size - 1 ;
    int i = 0 ;
    while (low < high){
        swap(arr[high] , arr[low]);
        low++ ; 
        high--;
    }
    cout<<"Array is:";
    for(int i = 0 ; i < size ; i ++){
    cout<<arr[i]<<" ";
    }
    return 0;
}