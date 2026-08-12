#include<iostream>
using namespace std;

int main(){
    int binnum = 101101 ;
    int ans = 0 ; 
    int power = 1 ;
    while( binnum > 0 ){
        int rem = binnum % 10 ;
        ans += rem*power ;
        binnum = binnum / 10 ;
        power = power * 2 ;
    }
    cout<<"Your number after conversion is :"<<ans;
    return 0;
}