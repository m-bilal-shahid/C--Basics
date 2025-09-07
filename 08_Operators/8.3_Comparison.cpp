/*Comparison (Relational) Operators:
These operators compare two values and always return a boolean (true/false).

1. == (Equal to)

Checks whether both values are equal.

int a = 5, b = 5;
cout << (a == b); 

2. != (Not equal to)

Checks whether both values are not equal.

int a = 5, b = 3;
cout << (a != b);

3. > (Greater than)

Checks whether the left value is greater than the right value.

int a = 7, b = 3;
cout << (a > b); 

4. < (Less than)

Checks whether the left value is less than the right value.

int a = 2, b = 5;
cout << (a < b);

5. >= (Greater than or equal to)

Checks whether the left value is greater than or equal to the right value.

int a = 5, b = 5;
cout << (a >= b);

6. <= (Less than or equal to)

Checks whether the left value is less than or equal to the right value.

int a = 3, b = 5;
cout << (a <= b);
*/

//Example :

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;
    cout << "x > y  : " << (x > y) << endl;
    cout << "x < y  : " << (x < y) << endl;
    cout << "x >= y : " << (x >= y) << endl;
    cout << "x <= y : " << (x <= y) << endl;

    return 0;
}
