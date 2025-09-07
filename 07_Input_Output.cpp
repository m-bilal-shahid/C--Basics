// C++ Basics - Topic 7: Input Output

/*

1. Standard Input/Output Streams (cin and cout):

In C++, input and output are handled using cin and cout.

- cout → used to print data on the console.
- cin  → used to take input from the user.

Example:

// Basic Input and Output
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";  // output message
    cin >> age;                  // user input
    cout << "Your age is " << age << endl;
}



Explanation:
<<  → insertion operator (sends data to cout).
>>  → extraction operator (reads data using cin).
-----------------------------------------------------------




2. Using endl and \n:


Both endl and \n create a new line, but there is a difference:

- endl → new line + flushes the output buffer (forces immediate display).
- \n   → only new line (faster and more efficient).

Examples:
// Using \n
cout << "Hello\n";
cout << "World\n";

// Using endl
cout << "Hello" << endl;
cout << "World" << endl;
-----------------------------------------------------------




3. Formatted Output with <iomanip>


Sometimes we want our output to look neat and aligned.
The <iomanip> header provides tools like setw, setprecision, and fixed.

(1) setw(n) → Set width of output (default: right aligned)

// setw example
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << "Name" << setw(5) << "Age" << endl;
    cout << setw(10) << "Ali"  << setw(5) << 20 << endl;
    cout << setw(10) << "Sara" << setw(5) << 25 << endl;
}


// Left alignment:
By default, text is right-aligned. To left-align, use `left`.
Example:

cout << left << setw(10) << "Ali" << "|" << endl;

-----------------------------------------------------------

(2) setprecision(n) → Control decimal precision:

// Example with significant digits
double pi = 3.14159265;
cout << setprecision(3) << pi << endl; // prints 3.14

// Example with fixed decimal places
cout << fixed << setprecision(4) << pi << endl; // prints 3.1416

-----------------------------------------------------------

(3) fixed → Fixed point notation:
Ensures floating-point numbers are displayed 
with fixed decimal digits instead of scientific notation.

// Without fixed
double num = 123.456789;
cout << setprecision(4) << num << endl; // may show in scientific form

// With fixed
cout << fixed << setprecision(4) << num << endl; // 123.4568



Full Program (setw + precision + fixed):
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << "Name" << setw(10) << "Marks" << setw(10) << "GPA" << endl;
    cout << setw(10) << "Ali"  << setw(10) << 87     << setw(10) << fixed << setprecision(2) << 3.75 << endl;
    cout << setw(10) << "Sara" << setw(10) << 92     << setw(10) << fixed << setprecision(2) << 3.95 << endl;
}




/*  -----------------------------------------------------------

4. Reading and Writing Numeric and String Data


(1) Numeric Input and Output:

// Simple numeric input/output
#include <iostream>
using namespace std;

int main() {
    int age;
    double price;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter product price: ";
    cin >> price;

    cout << "Your age: " << age << endl;
    cout << "Product price: " << price << endl;
}
-----------------------------------------------------------



(2) String Input and Output:

// (a) Single word string:
By default, `cin` reads input only until a space is found.

Example:
string name;
cout << "Enter your first name: ";
cin >> name;
cout << "Hello, " << name << endl;


If the user enters multiple words (e.g., *Ali Khan*), only the first word will be stored.


// (b) Full line string

  To read a full line, use `getline(cin, variable)`.  
   If `cin` was used before, clear leftover input with `cin.ignore()`.

string fullName;
cin.ignore(); // to clear leftover input
cout << "Enter your full name: ";
getline(cin, fullName);
cout << "Your full name: " << fullName << endl;



-----------------------------------------------------------
Full Program (numeric + string input):
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double salary;
    string firstName, fullName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your full name: ";
    cin.ignore(); // clear buffer before getline
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your monthly salary: ";
    cin >> salary;

    cout << "\nSummary\n";
    cout << "First Name: " << firstName << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Age       : " << age << endl;
    cout << "Salary    : " << salary << endl;
}


