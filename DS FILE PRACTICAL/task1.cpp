#include <iostream>
using namespace std;

int main(){
    int arr[100], n, element, pos;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // at beginning
    cout << "\nEnter element to insert at beginning: ";
    cin >> element;
    for (int i = n; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    n++;
    cout << "Array after insertion at beginning: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    //at end   
    cout << "\n\nEnter element to insert at end: ";
    cin >> element;
    arr[n] = element;
    n++;
    cout << "Array after insertion at end: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    //at particular position
    cout << "\n\nEnter position to insert element: ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> element;
    for (int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
    cout << "Array after insertion at position " << pos << ": ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}