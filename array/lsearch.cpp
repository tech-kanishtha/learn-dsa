#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;
    int target = 8;

    int loc = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            loc = i;
            break;
        }
    }

    if(loc == -1)
        cout << "Element not found";
    else
        cout << "Element found at " << loc + 1 << endl;

    return 0;
}
// time complexity - O(n)