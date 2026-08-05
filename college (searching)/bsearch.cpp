#include<iostream>
using namespace std;

void selectionsort(int arr[] , int n); 
int bsearch(int arr[] , int n , int target);

int main(){

    int size ; 
    cout<<"Enter the size of the array : ";
    cin>>size ;
    
    int arr[size] ; 

    cout<<"Enter elements for the array : ";
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    selectionsort(arr , size);
    cout<<"SORTED ARRAY"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target ; 
    cout<<"Enter the target element : ";
    cin>>target ;

    int loc = bsearch(arr , size , target);

    if ( loc == -1) cout<<"Target not found";
    else cout<<"Target found at index "<<loc+1 ;
    
    return 0;
}
int bsearch(int arr[] , int n , int target){

    int high = n-1; 
    int low = 0 ;

    while(high >= low){

        int mid = (high + low)/2 ;

        if(arr[mid]==target){
            return mid ;
        }
        else if (arr[mid]>target){
            high = mid - 1 ;
        }
        else low = mid + 1 ;
    }

    return - 1 ;
}
void selectionsort(int arr[] , int n){
    for(int i = 0 ; i< n-1 ; i++){
        int minIndex = i ;
        for(int j = i + 1 ; j < n ; j++){
            if ( arr[minIndex]> arr[j])
                minIndex = j ;
        }
        int a = arr [i] ; 
        arr[i] = arr[minIndex];
        arr[minIndex] = a ;
        
    }
}