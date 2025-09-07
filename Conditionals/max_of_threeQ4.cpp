//Q.4:-
// CONDITIONALS (TAKE THE WORST/LONGEST BRANCH)
//EXAMPLE 1: Max of three numbers(all constant work)
// READ a,b,c
// IF a >= b AND a >=c
// PRINT a
// ELSE IF b>=c
// PRINT b
// ELSE
// PRINT c
// END
//CODE:-
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Read input
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Conditional logic (worst/longest branch style)
    if (a >= b && a >= c) {
        cout << "Maximum = " << a << endl;
    } 
    else if (b >= c) {
        cout << "Maximum = " << b << endl;
    } 
    else {
        cout << "Maximum = " << c << endl;
    }

    return 0;
}
