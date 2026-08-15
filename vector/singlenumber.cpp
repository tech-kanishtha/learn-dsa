#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2 , 4 , 5 , 4 , 2} ;
    int ans = 0 ;
    for ( int i : nums){
        ans = ans ^ i ;
    }
    cout<<"The unique value is : "<<ans<<endl;
    return 0;
}
