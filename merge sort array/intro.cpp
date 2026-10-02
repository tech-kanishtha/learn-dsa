#include<iostream>
using namespace std;
void sort(int arr[] ,int low , int high){
    int mid = (low + high) / 2;
    if(low<high){
        sort(arr , low , mid);
        sort(arr , mid + 1 , high);
    }
}
int main(){
    
    return 0;
}