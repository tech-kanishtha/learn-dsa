#include<iostream>
#include <climits>
using namespace std;

int main(){
    int n = 5 ;
    int maximumsum = INT_MIN; 
    int arr[] = {1 , 2 , 3 , 4 , 5};
    for (int  st = 0 ; st <  n ; st ++ ){
            int currsum  = 0 ;
        for(int end = st ; end < n ; end ++ ){
                currsum += arr[end ];
                maximumsum = max(currsum , maximumsum); 
        }
    }
    cout<<"Maximum sum is : "<<maximumsum ; 
    return 0;
}