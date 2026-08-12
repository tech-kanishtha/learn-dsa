#include<iostream>
using namespace std;

int main(){
    /*
    if n = 5 ; 
    ans = 101 in binary 
    which is actually 1*10(2) + 0*10(1) + 1*10(0) ;
    */
   int ans = 0 ; 
   int  pow = 1 ; //10(0)
   int decnum = 45;
   while( decnum > 0){
    int rem = decnum % 2 ;
    decnum = decnum / 2 ;
    ans += rem*pow ;
    pow = pow * 10 ;
   }
    cout<<"Your number after conversion is :"<<ans ;
    return 0;
}