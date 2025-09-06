//# C++ Basics - Topic 2: Escape Characters

/* 
Escape characters are special characters that cannot be typed directly from the keyboard 
or have a special function. They are always written as a backslash (\) followed by a letter.

1. \n → New Line
Moves the cursor to the next line.
// Example: cout << "Hello\nWorld";

2. \t → Horizontal Tab
Inserts a tab space (larger space).
// Example: cout << "Name\tAge";

3. \\ → Backslash
To print a single backslash, use double backslash.
// Example: cout << "Path: C:\\Users\\Bilal";

4. \" → Double Quote
To print double quotes inside a string.
// Example: cout << "He said \"Hello\"";

5. \' → Single Quote
To print single quotes inside a string.
// Example: cout << "It\'s raining today.";

6. \b → Backspace
Deletes the previous character.
// Example: cout << "Hello\b!";
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello\nWorld";            // New line
    cout << "\nName\tAge";             // Tab space
    cout << "\nPath: C:\\Files";       // Backslash
    cout << "\nHe said \"Hello\"";     // Double quotes
    cout << "\nIt\'s raining";         // Single quote
    cout << "\nHello\b!";              // Backspace
    return 0;
}
