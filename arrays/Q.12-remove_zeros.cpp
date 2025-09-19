// Q.12 - Problem Statement:
// Given 'n' product IDs, filter out all products with ID = 0 
// and print only the valid product IDs in order.
//
// Input Format:-
// n -> number of product IDs
// n space-separated integers (product IDs)
//
// Output Format:-
// Filtered list of product IDs (ignoring 0)
//
// Code Constraints:-
// 1 <= n <= 25
// 0 <= product ID <= 50
//
// Sample test cases:- 
// Input 1:-
// 6
// 1 2 3 4 0 5
// Output 1:-
// 1 2 3 4 5
//
// Input 2:-
// 8
// 1 0 2 0 3 0 4 0 
// Output 2:-
// 1 2 3 4

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of product IDs
    
    int arr[25]; // constraint: n <= 25
    int count = 0;
    
    // Input and filter non-zero product IDs
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num != 0) {
            arr[count++] = num; // store only non-zero values
        }
    }

    // Output filtered product IDs
    for (int i = 0; i < count; i++) {
        cout << arr[i];
        if (i != count - 1) cout << " "; // print spaces between numbers
    }
    cout << endl;

    return 0;
}
