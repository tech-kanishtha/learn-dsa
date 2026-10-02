#include <iostream>
using namespace std;
int main()
{
    int stack[100];
    int top = -1;
    int n, element;
    cout << "Enter size of stack: ";
    cin >> n;
    // PUSH
    cout << "Enter element to push: ";
    cin >> element;
    if (top == n - 1){
        cout << "Stack Overflow";
    }
    else{
        top++;
        stack[top] = element;
        cout << "Element pushed successfully.\n";
    }
    // POP
    if (top == -1){
        cout << "Stack Underflow";
    }
    else {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
    return 0;
}