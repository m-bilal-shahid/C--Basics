/* Conditional Statements:
Conditional statements are used for **decision making** in a program.

It lets the program decide:

  "If this condition is true, do this; otherwise, do something else."

In C++, we use:

1. if
2. if-else
3. else-if

---

1. if statement:

Used to check a single condition. Code inside executes **only if the condition is true**.

Syntax:
if(condition){
    // code executed only if condition is true
}

Example:
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "You passed!" << endl;
    }
}

/*
---

2. if-else statement:

Used to check a condition and also handle the else case if the condition is false.

Syntax:

if (condition) {
    // executed if true
} else {
    // executed if false
}

Example:
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

/*
---

3. else-if statement:

Used to check **multiple conditions**. The program checks sequentially from top to bottom.

Syntax:

if (condition1) {
    // executed if condition1 is true
} else if (condition2) {
    // executed if condition2 is true
} else {
    // executed if all conditions are false
}

Example:
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

/*
---

Nested if – Concept:

A nested if means **an if inside another if**.  

This is useful when decisions depend on multiple levels.

Syntax:

if (condition1) {
    if (condition2) {
        // executed if both conditions are true
    }
}

Example 1: Simple Nested if
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "You passed!" << endl;

        if (marks >= 80) {
            cout << "Excellent performance!" << endl;
        }
    } else {
        cout << "You failed!" << endl;
    }
}

/*
Example 2: Nested if with Multiple Levels
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;

        if (marks >= 70) {
            cout << "Good" << endl;

            if (marks >= 90) {
                cout << "Excellent" << endl;
            }
        }
    } else {
        cout << "Fail" << endl;
    }
}

/*
---

 Example:
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A+" << endl;
        cout << "Excellent!";
    } else if (marks >= 75 && marks < 90) {
        cout << "Grade: A";
        if (marks >= 80) {
            cout << "\nExcellent!";
        }
    } else if (marks >= 60 && marks < 75) {
        cout << "Grade: B";
    } else if (marks >= 50 && marks < 60) {
        cout << "Grade: C";
    } else {
        cout << "Fail";
    }

    return 0;
}
