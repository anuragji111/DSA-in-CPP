// Q.7:- Write a Program in C++ to reverse the digits of a number using Array.
// Explanation:
// 1. Take a number as input.
// 2. Extract its digits and store them in an array.
// 3. Print digits in reverse order to get the reversed number.

#include <iostream>
using namespace std;

int main() {
    int num, arr[20], n = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Extract digits into array
    while (num > 0) {
        arr[n] = num % 10; 
        num = num / 10;
        n++;
    }

    cout << "Reversed Number = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
