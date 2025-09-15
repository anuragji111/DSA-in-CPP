// Q.5: Program to Input N Elements in an Array and Display Them
// Explanation:
// 1. User enters size of array (n).
// 2. User inputs n elements.
// 3. Program prints entered elements.
// Learning: Basics of arrays & iteration in C++.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You have entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}