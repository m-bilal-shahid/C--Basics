//# C++ Basics - Topic 1: Introduction

/* (1) Introduction to C++:

--Definition:
C++ is a general-purpose programming language that supports Object-Oriented Programming (OOP) concepts.
It is used for system software, application software, game development, drivers, and high-performance applications.

--History:
Developer: Bjarne Stroustrup
Year: 1979 (Started at Bell Labs, USA)
Purpose: To add object-oriented features to C
Original Name: "C with Classes"
Renamed to C++ in 1983
("++" means increment — an advanced version of C)

--Special Features of C++:
- Multi-paradigm Language:
  Supports procedural programming (like C)
  Object-oriented programming (classes, objects)
  Generic programming (templates)

- Fast and Powerful:
  Low-level memory control (pointers)
  High performance (game engines, compilers)

- Portability:
  Programs can run on different platforms (with minor changes)

- Rich Library Support:
  Standard Template Library (STL)
  Input/Output streams (cin, cout)

- Extensibility:
  You can create your own classes, functions, and overload operators

--C++ Program Flow:
Typical flow of a C++ program:
1. Write code (.cpp file)
2. Compile (source code → machine code)
3. Link (attach libraries)
4. Execute (run final program)
*/

/* (2) Keywords:
Keywords are reserved words in C++ that have a special meaning.
They are part of the language syntax and the compiler has fixed meanings for them.
Keywords cannot be used as variable names or identifiers.
Examples: int, float, void, double, char, etc.
*/

/* (3) Identifiers:
Identifiers are names we create for variables, functions, classes, objects, arrays, etc.
They are basically programmer-defined labels.
Rules:
- Only letters (A-Z, a-z), digits (0-9), and underscore (_)
- First character cannot be a number
- Cannot use keywords
- Case-sensitive (Value and value are different)
- Unlimited length (keep it readable)
*/

/* (4) Comments:
Comments are non-executable text in code that helps to:
- Make the code easy to understand
- Provide documentation
- Temporarily disable code
The compiler ignores comments.

Two types of comments:

(a) Single-line comment
Syntax: starts with //
Covers only one line

Example:
// This is a single-line comment
int x = 5; // Variable x is assigned 5

(b) Multi-line comment
Syntax: starts with /* and ends with */
// Example of a multi-line comment:
  /*This is a multi-line comment.
   You can write multiple lines here.

*/

/* (5) Basic Structure of a C++ Program:

A standard C++ program has the following format:

#include <iostream>   // 1. Preprocessor Directive
using namespace std;  // 2. Namespace Declaration

int main() {          // 3. Main Function Start
    // 4. Body of the Program
    cout << "Hello World";

    return 0;         // 5. Return Statement
}                     // 6. Main Function End

Parts explained:

(5.1) Preprocessor Directive
Syntax:
 #include <header_file>
Placed at the start of the program.
Tells the compiler which library to include.
Example:
#include <iostream> → for input/output operations (cin, cout)
#include <cmath> → for math functions
No semicolon at the end.

(5.2) Namespace Declaration
Syntax: using namespace std;
Purpose: Allows direct use of classes/functions in std namespace without writing std:: every time.
Example:
Without namespace: std::cout << "Hello";
With namespace: cout << "Hello";

(5.3) Main Function
Syntax:
int main() {
    // code
    return 0;
}
Entry point of the program. Execution starts from main().
int means main returns an integer.
return 0; indicates successful program execution.

(5.4) Body of the Program
Enclosed in curly braces { }.
Contains variables, loops, conditions, functions, etc.
Example:
cout << "Enter your name: ";
cin >> name;

(5.5) Return Statement
return 0; → Normal program exit.
You can return a custom exit code if needed.
*/

