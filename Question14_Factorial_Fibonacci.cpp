// File: Question14_Factorial_Fibonacci.cpp
// Author: Anurag Kumar
// Date: 24-Sept-2025
// Description: Program to compute factorial of a number using iterative method 
//              and generate Fibonacci series using recursion.

#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; // multiply each number
    }
    return fact;
}

// Recursive function to generate Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1) {
        return n; // base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}

int main() {
    int num;

    // Factorial computation
    cout << "Enter a number to compute factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    // Fibonacci computation
    cout << "Enter number of terms for Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci series: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
