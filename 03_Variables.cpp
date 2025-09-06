// C++ Basics - Topic 3: Variables

/*Definition:
A variable is a named storage location in computer memory that stores data.

In simple words:
A "box" (memory container) with a name, and inside that box we can put a value, and also change it later.

Parts of a Variable:
1. Name (identifier) → the variable name (e.g., age, marks)
2. Type → the type of data it stores (e.g., int, float, char)
3. Value → the actual stored data

Variable Naming Rules:
- Only letters (A–Z, a–z), digits (0–9), and underscore (_) are allowed.
- Must start with a letter or underscore (not with a digit).
- Spaces are not allowed in names.
- C++ keywords (int, if, class, etc.) cannot be used as variable names.
- Variable names are case-sensitive (age and Age are different).
- Names should be short and meaningful.
- Constants are usually written in ALL_CAPS.
*/

/* -------------------------------------------------
   DECLARATION & INITIALIZATION
-------------------------------------------------- */

/*
1) Declaration:
Telling the compiler the variable type and name, without giving a value yet.

Syntax:
    data_type variable_name;

Example:
    int age;   // declared only

Memory is allocated, but value is undefined (garbage value).
*/

/*
2) Initialization:
Declaring a variable and assigning a value at the same time.

Syntax:
    data_type variable_name = value;

Example:
    int age = 20;   // declared + initialized
*/

/*
3) Declaration first, initialization later:

    int age;    // declaration
    age = 20;   // initialization
*/

/* -------------------------------------------------
   VARIABLE SCOPE AND LIFETIME
-------------------------------------------------- */

/*
Scope:
The region of the program where the variable can be accessed.
If a variable goes out of scope, accessing it gives an error.

Lifetime:
The duration for which the variable exists in memory.
*/

/* -------------------------------------------------
   TYPES OF VARIABLES (BY SCOPE AND LIFETIME)
-------------------------------------------------- */

// 1. Local Variables
/*
Definition: Variables declared inside a function, loop, or block {}.
Scope: Only accessible inside that function/block.
Lifetime: Exists until the function/block finishes execution.
*/

#include <iostream>
using namespace std;

void testLocal() {
    int x = 10;  // local variable
    cout << "x inside testLocal(): " << x << endl;
}

int main_local() {
    testLocal();
    // cout << x;  //  Error: x is not accessible here
    return 0;
}

// 2. Global Variables
/*
Definition: Declared outside all functions.
Scope: Accessible in any function of the program.
Lifetime: Exists throughout the execution of the program.
*/

int g = 5;  // global variable

void showGlobal() {
    cout << "g inside showGlobal(): " << g << endl;
}

int main_global() {
    cout << "g in main(): " << g << endl;
    g = 10;  // global variable changed
    showGlobal();
    return 0;
}

// 3. Static Variables
/*
Definition: Declared with the 'static' keyword.
Scope: Visible only in the scope where it is declared.
Lifetime: Exists until the program ends (only one copy exists).

Special Feature:
Inside functions, static variables are initialized only once and
retain their value between function calls.
*/

void counter() {
    static int count = 0; // static variable
    count++;
    cout << "Count: " << count << endl;
}

int main_static() {
    counter(); // Count: 1
    counter(); // Count: 2
    counter(); // Count: 3
    return 0;
}

/* -------------------------------------------------
   TASK EXAMPLE
-------------------------------------------------- */

#include<iostream>
using namespace std;

int totalscore = 100;  // global variable

int main_task() {
    int num1, num2, sum;

    cout << "Enter Two Numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Global Total Score: " << totalscore << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    static int var = 2;
    cout << "First Static Value: " << var << endl;

    var += 1;
    cout << "Second Static Value: " << var << endl;

    return 0;
}

/* -------------------------------------------------
   STORAGE CLASSES
-------------------------------------------------- */

// 1. auto (Automatic Storage Class)
/*
Modern C++: 'auto' lets the compiler deduce the type automatically.
Older C: meant "automatic storage" (local variable stored in stack).
Scope: Local
Lifetime: Until function/block ends
Storage: Stack memory
*/

int main_auto() {
    auto x = 10;     // type deduced as int
    auto y = 3.5;    // type deduced as double

    cout << x << " " << y;
    return 0;
}

// 2. register
/*
Request to store variable in CPU register for faster access.
Modern compilers often ignore this (they optimize automatically).
Scope: Local
Lifetime: Until function/block ends
Storage: CPU register (if available)
*/

int main_register() {
    register int counter = 0;
    for (int i = 0; i < 5; i++) {
        counter++;
        cout << counter << endl;
    }
    return 0;
}

// 3. static
/*
Two uses:
1. Local static variable → Initialized once, retains value across calls.
2. Global static variable/function → Accessible only within the file.
Scope:
- Local static: only within function
- Global static: only within current file
Lifetime: Entire program duration
Storage: Static memory area
*/

void counterFunction() {
    static int count = 0; // initialized once
    count++;
    cout << "Count: " << count << endl;
}

int main_static2() {
    counterFunction(); // Count: 1
    counterFunction(); // Count: 2
    counterFunction(); // Count: 3
    return 0;
}

// 4. extern
/*
Used to declare a global variable defined in another file.
Tells compiler: "the definition exists somewhere else."
Scope: Global
Lifetime: Entire program
Storage: Static memory area
*/

// Example across 2 files:
// file1.cpp
/*
#include <iostream>
using namespace std;

int number = 10; // defined here

void showNumber() {
    cout << number << endl;
}
*/

// file2.cpp
/*
#include <iostream>
using namespace std;

extern int number; // declared here

int main() {
    cout << number << endl;
}
*/
