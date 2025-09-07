/* While Loop in C++

Definition:
A while loop is a control structure that repeats a block of code 
as long as a given condition is true.  
If the condition becomes false, the loop stops.

Syntax:
while(condition){
    // code to execute
}

How it works:

1. First, the condition is checked.
2. If the condition is true → the loop body executes.
3. Then the condition is checked again.
4. This repeats until the condition becomes false.

 Warning: If the condition never becomes false, the loop will run infinitely.

Example 1: Print numbers from 1 to 5
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;          // initialization
    while(i <= 5) {     // condition check
        cout << i << " ";
        i++;            // update
    }
    return 0;
}

/*
Example 2: Sum positive numbers until a negative number is entered
*/

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (negative number to stop): ";
    cin >> num;

    while(num >= 0) {
        sum += num;   
        cout << "Enter another number: ";
        cin >> num;
    }

    cout << "Sum of positive numbers: " << sum;
    return 0;
}

/* Do-While Loop in C++

Definition:
A do-while loop is also used for repeating tasks, but with a key difference:

The condition is checked **after** executing the loop body.  
This means the loop will **run at least once**, even if the condition is false.

Syntax:

do {
    // statements
} while (condition);

How it works:

1. The block inside do { ... } executes first.
2. Then while(condition) is checked.
3. If the condition is true → the loop executes again.
4. If the condition is false → the loop stops.

Example 1: Simple counting from 1 to 5
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while(i <= 5);

    return 0;
}

/*
Example 2: Find the maximum number entered by the user (-1 to stop)
*/

#include <iostream>
using namespace std;

int main() {
    int num, max = 0;
    cout << "Enter a number (-1 to stop): ";
    cin >> num;

    do {
        if(num > max) {
            max = num;
        }
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
    } while(num != -1);

    cout << "Maximum number: " << max;
    return 0;
}
