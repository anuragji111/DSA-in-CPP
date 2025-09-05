//Q.9:- Write a Program in C++ to do deletion of elements in Array.

#include <iostream>
using namespace std;

int main() {
    int arr[100], size, index;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index for deletion (0 to " << size-1 << "): ";
    cin >> index;

    if (index < 0 || index >= size) {
        cout << "Error: Invalid index!" << endl;
    } else {
        // Shift elements left from the index
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce size after deletion

        cout << "Array after deletion: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}