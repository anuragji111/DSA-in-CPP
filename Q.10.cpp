//Q.10:- 3/15 - Refer to the sample output formatting specification:
Code Constraints:
1<n<20
The input characters can be any printable ASCII characters. 

Sample Test Case:
Input1:          
4
A B C D
Output1:
D C B A
;


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