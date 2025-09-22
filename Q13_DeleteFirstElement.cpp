// Q.13 - Problem Statement: 
// Assist Tamizh, a student learning arrays. 
// He is struggling with deleting the first element of an array. 
// Write a program that prompts the user to enter array elements 
// and then displays the updated array after deleting the first element.

// Input Format:- 
// First line: integer n (size of array). 
// Second line: n space-separated integers (array elements).

// Output Format:- 
// Updated array after deleting the first element (space-separated).

// Constraints:- 
// 1 <= n <= 25 
// 0 <= element <= 50

// Sample test cases:- 
// Input 1:-
// 6
// 1 2 3 4 0 5
// Output 1:-
// 2 3 4 0 5
//
// Input 2:-
// 8
// 1 0 2 0 3 0 4 0 
// Output 2:-
// 0 2 0 3 0 4 0

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 1 || n > 25) {
        cout << "Invalid size. Must be between 1 and 25." << endl;
        return 0;
    }

    int arr[25];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Deleting the first element means shifting all elements left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // new size after deletion

    cout << "Updated array after deleting the first element: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
