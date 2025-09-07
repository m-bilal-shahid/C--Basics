/* Nested Loops in C++

Definition:
A nested loop is when one loop is written inside another loop.

- Outer loop → the loop on the outside
- Inner loop → the loop inside

This means for each iteration of the outer loop, the inner loop runs completely.

Example (For loop):

for(int i = 1; i <= 3; i++) {      // Outer loop
    for(int j = 1; j <= 2; j++) {  // Inner loop
        cout << "i=" << i << ", j=" << j << endl;
    }
}

Execution Step by Step:

- First i=1 → inner loop runs j=1 and j=2
- Then i=2 → inner loop runs j=1 and j=2
- Then i=3 → inner loop runs j=1 and j=2
*/

/* Example: Print a triangle of stars */
#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}

/* Loop Control Statements

These statements control the normal flow of loops.

1. break Statement
- Stops the loop immediately, even if the condition is still true.
Example:
*/

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break; // loop stops here
        }
        cout << i << " ";
    }
    return 0;
}

/* 2. continue Statement
- Skips the current iteration and moves to the next one.
Example:
*/

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue; // skip this iteration
        }
        cout << i << " ";
    }
    return 0;
}

/* 3. goto Statement
- Jumps to a labeled point in the program.
- Use cautiously as it can make code confusing.
Example:
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;

start: // label
    if(i <= 5) {
        cout << i << " ";
        i++;
        goto start; // jump back to label
    }

    return 0;
}

/* Example Task: Using goto to simulate a loop */
#include <iostream>
using namespace std;

int main() {
    int i = 1;

stt: 
    if(i <= 5) {
        cout << i << endl;
        i++;
        goto stt;
    }
}

