/*Definition:
Assignment operators are used to assign values to variables.
Basic syntax:

variable operator= value;


1. Simple Assignment (=)

Stores a value in a variable.

int a = 10;  

2. Add and Assign (+=)

Adds a value to the variable and stores the result back in the same variable.

int a = 5;
a += 3; 

3. Subtract and Assign (-=)

int a = 10;
a -= 4;

4. Multiply and Assign (*=)

int a = 7;
a *= 2;

5. Divide and Assign (/=)

int a = 20;
a /= 5;

6. Modulus and Assign (%=)

int a = 17;
a %= 5; 
*/

// Task:

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    a += 6;
    cout << "After +=6: " << a << endl;

    a -= 6;
    cout << "After -=6: " << a << endl;

    a *= 6;
    cout << "After *=6: " << a << endl;

    a /= 6;
    cout << "After /=6: " << a << endl;

    a %= 6;
    cout << "After %=6: " << a << endl;

    return 0;
}
