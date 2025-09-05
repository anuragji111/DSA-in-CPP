//Q.8:- Write a Program in C++ to do insertion of elements in Array. 

#include <iostream>
using namespace std;

int main() {
    int arr[100], s, ind, val;
    
    cout << "Enter the size of the array: ";
    cin >> s;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter index for insertion: ";
    cin >> ind;
    
    cout << "Enter value to insert: ";
    cin >> val;
    
    if (ind < 0 || ind > s) {
        cout << "Error: Invalid index!" << endl;
    } else {
        // Shift elements to the right
        for (int i = s; i > ind; i--) {
            arr[i] = arr[i - 1];
        }
        arr[ind] = val;
        s++;  // Increase size after insertion
        
        cout << "Array after insertion: ";
        for (int i = 0; i < s; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
