// Q.10: Delete an element from an array at a given index
// Problem Constraints: 1 < n < 20
// Input: Any printable ASCII characters or integers
// Output: Array after deletion

/*
Sample Test Case:
Input:
4
A B C D
2
Output:
A B D
*/

#include <iostream>
using namespace std;

int main() {
    int size, index;
    char arr[20]; // Constraint: n < 20

    cout << "Enter the size of the array (1<n<20): ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index for deletion (0 to " << size - 1 << "): ";
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
