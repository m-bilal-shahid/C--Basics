// C++ Basics - Topic 4: Data Types and sizeof Operator

/* 
Data Types:
A data type specifies what type of data a variable can store and how much memory will be allocated for it.
C++ data types are mainly categorized into three types:

A) Primary / Fundamental Data Types
Built-in basic types in C++:
- int
- float
- char
- double
- bool
- void

B) Derived Data Types
Types derived from fundamental types:
- Arrays
- Pointers
- References
- Functions

C) User-Defined Data Types
Types created by the programmer:
- struct
- class
- enum
- typedef
*/

/* -------------------------------------------------
   1) int (Integer)
-------------------------------------------------- */
/*
Purpose: Stores whole numbers (positive/negative)
Size: 4 bytes
Range: -2,147,483,648 to 2,147,483,647

Example:
int age = 21;
*/

/* -------------------------------------------------
   2) float
-------------------------------------------------- */
/*
Purpose: Stores decimal/fractional numbers (single precision)
Size: 4 bytes
Precision: ~6–7 decimal digits

Example:
float pi = 3.14159;
*/

/* -------------------------------------------------
   3) double
-------------------------------------------------- */
/*
Purpose: Stores decimal numbers with higher precision (double precision floating point)
Size: 8 bytes
Precision: ~15–16 decimal digits

Example:
double price = 99.9999999;
*/

/* -------------------------------------------------
   4) char
-------------------------------------------------- */
/*
Purpose: Stores a single character
Size: 1 byte

Example:
char grade = 'A';
*/

/* -------------------------------------------------
   5) bool
-------------------------------------------------- */
/*
Purpose: Stores logical values (true or false)
Size: 1 byte
Values:
- true → internally 1
- false → internally 0

Use Cases:
- Conditions (if, while, for)
- Flags (yes/no, on/off type variables)
- Function return type (success/failure indication)

Example:
#include <iostream>
using namespace std;

int main() {
    int time;  
    cout << "Enter current time (0-23): ";
    cin >> time;

    bool isShopOpen = (time >= 9 && time <= 21); 
    // Shop is open if time is between 9 AM and 9 PM

    if (isShopOpen) {
        cout << "You can go shopping." << endl;
    } else {
        cout << "Shop is closed, come later." << endl;
    }
}
*/

/* -------------------------------------------------
   6) void
-------------------------------------------------- */
/*
Purpose: Represents "no data" — used when no value is returned or no data exists
Size: No storage allocated

Uses:
1) Function return type (when function returns nothing)
Example:
void greet() {
    cout << "Hello World";
}

2) Function arguments (C-style syntax)
void fun(void); // no arguments

3) Generic pointers
When pointer type is unknown:
void* ptr;
int x = 5;
ptr = &x; // pointer to any type
*/

/* -------------------------------------------------
   sizeof Operator
-------------------------------------------------- */
/*
Definition:
sizeof is a compile-time operator in C++ that returns the number of bytes allocated for a variable or data type.

Syntax:
sizeof(expression)
sizeof(datatype)

Example:
#include <iostream>
using namespace std;

int main() {
    int a;
    double b;
    char c;

    cout << "Size of int variable a: " << sizeof(a) << " bytes" << endl;
    cout << "Size of double type: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char variable c: " << sizeof(c) << " bytes" << endl;

    return 0;
}
*/




#include <iostream>
using namespace std;


void greet() {
    cout << "Welcome to C++ Data Types Example!\n";
}

int main() {
   
    int age = 25;

    
    float height = 5.9;

    
    double balance = 12345.6789;

    
    char grade = 'A';

   
    bool isStudent = true;

    
    greet();

    cout << "\n--- Variable Values ---\n";
    cout << "Age (int): " << age << endl;
    cout << "Height (float): " << height << endl;
    cout << "Balance (double): " << balance << endl;
    cout << "Grade (char): " << grade << endl;
    cout << "Is Student (bool): " << isStudent << endl;

    cout << "\n--- Memory Sizes ---\n";
    cout << "Size of age (int): " << sizeof(age) << " bytes" << endl;
    cout << "Size of height (float): " << sizeof(height) << " bytes" << endl;
    cout << "Size of balance (double): " << sizeof(balance) << " bytes" << endl;
    cout << "Size of grade (char): " << sizeof(grade) << " bytes" << endl;
    cout << "Size of isStudent (bool): " << sizeof(isStudent) << " bytes" << endl;

    return 0;
}