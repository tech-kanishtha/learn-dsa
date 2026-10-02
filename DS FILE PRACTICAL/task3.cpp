#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, element;
    int location = -1;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            location = i;
            break; }
    }
    if (location == -1) {
        cout << "Element not found.";
    }
    else{
        cout << "Element found at index: " << location;
        cout << "\nElement found at position: " << location + 1;
    }

    return 0;
}