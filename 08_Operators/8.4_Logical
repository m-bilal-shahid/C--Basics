/*Logical Operators:
These operators always return true/false (bool) and are mostly used in conditions (like if, while).

1. AND (&&)

Both conditions must be true for the result to be true.

int a = 5, b = 10;
cout << (a > 0 && b > 0);   // true → 1
cout << (a > 0 && b < 0);   // false → 0

2. OR (||)

If at least one condition is true, the result is true.

int a = 5, b = -3;
cout << (a > 0 || b > 0);   // true → 1 (because a > 0 is true)
cout << (a < 0 || b < 0);   // true → 1 (because b < 0 is true)
cout << (a < 0 || b > 0);   // false → 0 (both false)

3. NOT (!)

Reverses the result of a condition.

int a = 5;
cout << !(a > 0);   // a > 0 is true → !true = false → 0
cout << !(a < 0);   // a < 0 is false → !false = true → 1
*/

//Example:

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Positive AND Even: " << (x > 0 && x % 2 == 0) << endl;
    cout << "Negative OR Odd: " << (x < 0 || x % 2 != 0) << endl;
    cout << "NOT Positive: " << !(x > 0) << endl;

    return 0;
}
