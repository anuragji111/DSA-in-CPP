#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    // Outer loop runs N times
    for (int i = 1; i <= N; i++) {
        int x = N;   // initialize x with N for each iteration

        // Inner loop runs O(log N) times (dividing by 2)
        while (x > 1) {
            x = x / 2;
        }
    }

    cout << "Executed Successfully (O(N log N))\n";
    return 0;
}
