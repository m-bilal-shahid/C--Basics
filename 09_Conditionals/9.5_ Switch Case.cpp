/* Switch Case Statement :

Switch case is an alternative to if-else-if chains when you need to check a variable against multiple exact values.

- Can be used with: integer, char, enum, and from C++17 limited string types.
- Makes code cleaner and more readable for multiple conditions.
- Best for exact value checks; for ranges, use if-else-if.

Syntax:

switch (expression) {
    case value1:
        // executed if expression == value1
        break;
    case value2:
        // executed if expression == value2
        break;
    ...
    default:
        // executed if no case matches (optional)
}

Important Points:

1. expression → the variable or value to check.
2. case value → matches expression to a specific value.
3. break → exits the switch block. Without break, next case will also execute (fall-through).
4. default → executes if no case matches. Optional but recommended.
*/

/* Example 1: Simple Day Checker */

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day!";
    }

    return 0;
}

/* Example 2: Multiple Cases with Same Output
   Using char grades */

#include <iostream>
#include <cctype>  // for toupper() / tolower()
using namespace std;

int main() {
    char grade;
    cout << "Enter Grade: ";
    cin >> grade;

    grade = toupper(grade);  // convert input to uppercase for easier matching

    switch(grade) {
        case 'A': cout << "Excellent"; break;
        case 'B': cout << "Very Good"; break;
        case 'C': cout << "Good"; break;
        case 'D': cout << "Average"; break;
        default: cout << "Invalid Grade";
    }

    return 0;
}

/* Optional: Using tolower() for lowercase handling
grade = tolower(grade);
switch(grade) {
    case 'a': cout << "Excellent"; break;
    case 'b': cout << "Very Good"; break;
    ...
}
*/
