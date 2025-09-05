//Q.3:-
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

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check maximum using conditionals
    if (a >= b && a >= c) {
        cout << "Maximum number is: " << a << endl;
    }
    else if (b >= c) {
        cout << "Maximum number is: " << b << endl;
    }
    else {
        cout << "Maximum number is: " << c << endl;
    }

    return 0;
}
