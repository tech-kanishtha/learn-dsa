 #include<iostream>
using namespace std;

int main(){
    int a = 20 ; 
    int * ptr = &a ;

    cout<<"Value of ptr : "<< ptr << endl;
    ptr ++ ; // ptr's value increases by the size of its data type (increases by 4 for int , incresases by 1 for char)

    cout<<"value of a :"<< a << endl;
    cout<<"Value of ptr : "<< ptr << endl;

    ptr+=3 ;
    // actual value of ptr will be now ptr + (3*4 = 12) = ptr + 12
    cout<<"Value of ptr : "<< ptr << endl;
    // difference of 12

    int * ptr1 ; 
    int * ptr2 ;
    cout << (*ptr1 < *ptr2) << endl ;
    return 0;
}