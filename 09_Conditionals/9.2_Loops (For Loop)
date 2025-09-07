/* Loops in C++

Definition:
A loop is a control structure that repeats a block of code as long as a specific condition is true.

This means, if we need to perform the same task multiple times (for example, 10 times), 
instead of writing the code repeatedly, we use a loop.

Types of Loops in C++:

1. for loop
2. while loop
3. do-while loop

---

For Loop:

Definition:
For loop is used when we know in advance how many times we want the code to run.

Syntax:

for(initialization; condition; update){
    // code to execute
}

Parts of For Loop:

1. Initialization:
   Define and initialize a variable (e.g., int i = 0;)

2. Condition:
   The loop continues as long as this condition is true.

3. Update:
   After each iteration, the variable is updated (e.g., i++).

Example 1: Simple for loop
*/

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        cout << "Hello World " << i << endl;
    }
    return 0;
}

/*
Example 2: Factorial of a number
*/

#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    cout << "Factorial of " << num << " is " << fact;
    return 0;
}

/*
Example 3: Print even numbers from 1 to a given number
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
