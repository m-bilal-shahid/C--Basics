// C++ Basics - Topic 6: Constants & Literals

/* -------------------------------------------------
   1. const Keyword
-------------------------------------------------- */
/*
Definition:
The 'const' keyword is used to make a variable constant, meaning:
Once initialized, its value cannot be changed.

Syntax:
    const data_type variable_name = value;

Example:
*/
#include <iostream>
using namespace std;

int main_const() {
    const int x = 10;
    cout << x << endl;

    // x = 20; // ❌ Error: assignment of read-only variable
    return 0;
}
/*
Use Case:
- Store fixed values (e.g., PI = 3.14159)
- Avoid magic numbers by using named constants
*/

/* -------------------------------------------------
   2. constexpr Keyword
-------------------------------------------------- */
/*
Definition:
'constexpr' is used when you want a variable or expression to be evaluated at compile-time.

Difference between const and constexpr:
- const: value cannot change, but can be assigned at runtime
- constexpr: value must be fixed at compile-time

Example:
*/
constexpr int square(int x) {
    return x * x;
}

int main_constexpr() {
    constexpr int result = square(5); // compile-time evaluation
    cout << result << endl;
    return 0;
}
/*
Use Case:
- When constant expressions are needed for array sizes or template parameters
- Performance optimization
*/

/* -------------------------------------------------
   3. mutable Keyword
-------------------------------------------------- */
/*
Definition:
'mutable' allows a member of a const object to be modified.

Normally, const objects cannot have their members changed,
but mutable members are an exception.

Example:
*/
class Student {
public:
    mutable int age;
    string name;
};

int main_mutable() {
    const Student s1 = {20, "Ali"};

    s1.age = 21; // ✅ allowed because 'age' is mutable
    // s1.name = "Ahmed"; // ❌ Error: cannot modify non-mutable member

    cout << s1.name << " - " << s1.age << endl;
    return 0;
}
/*
Use Case:
- Useful when some members of a const object need to change (e.g., caching, logging counters)
*/

/* -------------------------------------------------
   Literals
-------------------------------------------------- */
/*
Definition:
A literal is a fixed value directly written in the code.
It does not change during program execution.

Example:
    cout << 10;   // 10 is a literal

Types of Literals in C++:

1. Integer Literals
- Whole numbers without decimal
Example:
    cout << 25;
    cout << -100;

2. Floating-Point Literals
- Decimal numbers
Example:
    cout << 3.14;
    cout << -0.99;

3. Character Literals
- Single character enclosed in single quotes
Example:
    cout << 'A';
    cout << '9';

4. String Literals
- Multiple characters enclosed in double quotes
Example:
    cout << "Hello";
    cout << "12345";

5. Boolean Literals
- true or false
Example:
    cout << true;
    cout << false;

6. Null Literal
- Represents a null pointer
Example:
    int* ptr = nullptr;
*/
