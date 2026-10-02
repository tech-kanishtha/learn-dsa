#include <iostream>
using namespace std;
int main(){
    int arr[100], n, element;
    int location = -1 ;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> element;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == element){
            location = mid;
            break;
        }
        else if (element < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (location == -1){
        cout << "Element not found.";
    }
    else{
        cout << "Element found at index: " << location;
        cout << "\nElement found at position: " << location + 1;
    }
    return 0;
}