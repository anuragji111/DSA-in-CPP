// Q.6:- Write a Program in C++ to get the number then reverse the number using Array. 
// Explanation: 
// 1. Input a number (e.g., 1234). 
// 2. Extract each digit and store it in an array. 
// 3. Print the array in reverse order to get the reversed number.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num, digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int arr[digits];
    temp = num;

    // Store digits in array
    for (int i = 0; i < digits; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    // Print reversed number
    cout << "Reversed Number: ";
    for (int i = 0; i < digits; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
