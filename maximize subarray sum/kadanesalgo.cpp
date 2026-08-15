#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {3 , -4 , 5 , 4 , -1 , 7 , -8};
    int currsum = 0  , maxsum = INT_MIN;
    for(int i : arr){
        currsum += i ; 
        maxsum = max (currsum , maxsum) ;
        if (currsum < 0 ){
            currsum = 0 ;
        }
    }
    cout<<"Maximum sum value is  : "<<maxsum ; 
    return 0;
}