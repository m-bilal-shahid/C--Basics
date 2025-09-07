/* Operator Precedence (Priority)

Precedence means which operator is more important when multiple operators appear in the same expression. 
It decides which operation will be done first.

Example:

int result = 10 + 5 * 2;

If we just read left to right: 10 + 5 = 15, then 15 * 2 = 30  
But in C++, * has higher precedence than +, so it is evaluated first: 5 * 2 = 10, then 10 + 10 = 20

Associativity:

If two operators have the same precedence, associativity decides the direction of evaluation. 
It can be left to right or right to left.

Example 1: Left-to-Right Associativity

int result = 10 - 5 + 2;
// Step 1: 10 - 5 = 5
// Step 2: 5 + 2 = 7

Even though + comes after -, evaluation starts from the left because the associativity is left to right.

Example 2: Right-to-Left Associativity

int a, b, c;
a = b = c = 5;
// Step 1: c = 5
// Step 2: b = c → b = 5
// Step 3: a = b → a = 5

Even though we write a = b = c left to right, it is evaluated from the right because assignment has right-to-left associativity.

Quick Rules:

- When two operators have the same precedence, check associativity.
- Arithmetic, relational, and logical operators → left to right
- Assignment and conditional (ternary ?: ) → right to left

Common Precedence Order (important ones)

1. Parentheses ()
2. Unary operators: ++, --, !, ~
3. Multiplication, Division, Modulo: *, /, %
4. Addition, Subtraction: +, -
5. Relational: <, >, <=, >=
6. Equality: ==, !=
7. Logical AND: &&
8. Logical OR: ||
9. Conditional (ternary): ?:
10. Assignment: =, +=, -=, *=, /=, %=
11. Comma operator , → Lowest
*/

