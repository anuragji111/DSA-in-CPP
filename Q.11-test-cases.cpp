//Q.11:- Write a Program in C++ to this sample test case:
// Sample Test Case:
// Input1:          
// 5
// 1 2 3 4 5
// Output1: 
// 15
// ;
// Input 2:
// 7
// 12 65 34 80 38 51 72
// Output 2:
// 352

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of elements

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num; // Read each number
        sum += num; // Add to sum
    } 

    cout << sum << endl; // Print the sum
    return 0;
}
