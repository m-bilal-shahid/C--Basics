// C++ Basics - Topic 5: Type Modifiers & Data Type Limits

/* Type Modifiers:
Type Modifiers are used to modify the range and size of data types.
Mostly used with integer and floating-point types to control minimum and maximum values.

Common Type Modifiers:
- short
- long
- signed
- unsigned

Modifiers are usually applied with int, char, or double.
*/

/* 1. short
short int or short → smaller than normal int (less memory usage)

Typical size: 2 bytes (machine dependent)

Range (16-bit system):
signed short int: -32,768 to 32,767
unsigned short int: 0 to 65,535

Example:
*/
#include <iostream>
using namespace std;

int main_short() {
    short a = 32000;
    cout << "Short value: " << a << endl;
    return 0;
}

/* 2. long
long int → larger than normal int

Typical size: 4 or 8 bytes (system dependent)

Range (32-bit):
signed long int: -2,147,483,648 to 2,147,483,647
unsigned long int: 0 to 4,294,967,295

Example:
*/
int main_long() {
    long population = 8000000000;
    cout << "World Population: " << population << endl;
    return 0;
}

/* 3. signed
signed → variable can store both positive and negative values
Default int is signed, so writing signed is optional

Example:
*/
int main_signed() {
    signed int temperature = -20;
    cout << "Temperature: " << temperature << "°C" << endl;
    return 0;
}

/* 4. unsigned
unsigned → variable stores only positive values
Negative numbers are not allowed, doubling the positive range

Example:
*/
int main_unsigned() {
    unsigned int age = 25;
    cout << "Age: " << age << endl;
    return 0;
}

/* Modifiers Combination Table (Typical Use Cases)
Modifier Combination         Bytes (Typical)        Range
-----------------------------------------------------------
short int                    2                     -32,768 to 32,767
unsigned short int           2                     0 to 65,535
int / signed int             4                     -2,147,483,648 to 2,147,483,647
unsigned int                 4                     0 to 4,294,967,295
long int                     4 or 8                System dependent
unsigned long int            4 or 8                System dependent
long long int                8                     Very large range
unsigned long long int       8                     Even larger range
*/

/* Data Type Limits:
Each data type has a minimum and maximum range depending on storage size and signed/unsigned.

C++ provides:
- <climits> → limits of integer types (char, short, int, long, long long)
- <cfloat> → limits of floating-point types (float, double, long double)
*/

// Example: Integer Limits
#include <climits>

int main() {
    cout << "INT Min: " << INT_MIN << endl;
    cout << "INT Max: " << INT_MAX << endl;
    cout << "CHAR Min: " << CHAR_MIN << endl;
    cout << "CHAR Max: " << CHAR_MAX << endl;
    cout << "LONG LONG Max: " << LLONG_MAX << endl;
    return 0;
}

// Example: Floating-Point Limits
#include <cfloat>

int main() {
    cout << "Float Min: " << FLT_MIN << endl;
    cout << "Float Max: " << FLT_MAX << endl;
    cout << "Double Max: " << DBL_MAX << endl;
    return 0;
}

