#include<iostream>
using namespace std;

int main(){
    int n = 4 ;
    char c;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 65 ; j <=(65+n) ; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
for(int i = 0 ; i <n ; i++){
char ch = 'A';
for(int j = 0 ; j<n ; j++){
cout<<ch<<" ";
ch++ ;
}
cout<<endl;
}
*/