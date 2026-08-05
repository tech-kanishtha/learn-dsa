#include<iostream>
using namespace std;
int lsearch (int arr[] , int , int);
int main(){
    int item , size , loc ;

    cout<<"Enter the size of the array you want:";
    cin>>size ; 
    int arr[size];
    cout<<"Enter the elements::";
    for(int i = 0 ; i < size ; i++){
        cin>>arr[ i ];
    }
    
    cout<<"Enter the target element :";
    cin>>item ;
    loc = lsearch ( arr , size , item);
    if(loc == -1)cout<<"Not found";
    else cout<<"Found at :"<<(loc+1) ;
    return 0;

}
    int lsearch(int a[], int n, int item) {
        int i = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(a[i]==item) { 
                return i ;
            }
        }
         return -1 ;
}
