//Q.6:- Write a Program in C++ to get the number then reverse the number using Array. 


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];  // Array to store numbers

    // Store numbers in array
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }

    // Print array elements
    cout << "Reversed List: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
