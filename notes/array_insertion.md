# Q8: Array Insertion in C++

## Problem Statement
Write a C++ program to insert an element into an array at a given index.

---

## Explanation
In arrays, insertion is not as straightforward as in dynamic data structures.  
To insert an element:
1. Shift elements from the desired index to the right.
2. Insert the new element at the given position.
3. Increase the size of the array.

If the index is invalid (less than 0 or greater than size), insertion cannot be performed.

---

## Code

```cpp
// Q.8:- Write a Program in C++ to do insertion of elements in Array.
// Author: Anurag Kumar
// Subject: Data Structures & Algorithms (CSE205)

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

Sample Input/Output:
Enter the size of the array: 5
Enter the elements: 10 20 30 40 50
Enter index for insertion: 2
Enter value to insert: 99


Output:
Array after insertion: 10 20 99 30 40 50

Key Learning
Array insertion requires shifting elements.

Time complexity: O(n) in the worst case.

This operation is the basis for advanced data structures.


