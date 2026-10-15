#include <stdio.h>

int main() {
    // ========================================================================
    // 1. COMPARISON (RELATIONAL) OPERATORS
    // Used to compare two values. Result is always 1 (True) or 0 (False).
    // Operators: ==, !=, >, <, >=, <=
    // ========================================================================
    int a = 15;
    int b = 10;

    printf("--- COMPARISON OPERATORS (a = %d, b = %d) ---\n", a, b);
    printf("Equal to (a == b):              %d\n", a == b); // 0 (False)
    printf("Not equal to (a != b):          %d\n", a != b); // 1 (True)
    printf("Greater than (a > b):           %d\n", a > b);  // 1 (True)
    printf("Less than (a < b):              %d\n", a < b);  // 0 (False)
    printf("Greater than or equal (a >= b): %d\n", a >= b); // 1 (True)
    printf("Less than or equal (a <= b):    %d\n\n", a <= b); // 0 (False)


    // ========================================================================
    // 2. ASSIGNMENT OPERATORS
    // Used to store or update values in a variable.
    // Operators: =, +=, -=, *=, /=, %=
    // ========================================================================
    int x = 20; // Simple assignment: 20 is stored in variable x
    printf("--- ASSIGNMENT OPERATORS ---\n");
    printf("Initial value of x: %d\n", x);

    // Compound Addition: x += 5 means x = x + 5
    x += 5;
    printf("After x += 5:       %d\n", x); // 25

    // Compound Subtraction: x -= 3 means x = x - 3
    x -= 3;
    printf("After x -= 3:       %d\n", x); // 22

    // Compound Multiplication: x *= 2 means x = x * 2
    x *= 2;
    printf("After x *= 2:       %d\n", x); // 44

    // Compound Division: x /= 4 means x = x / 4
    x /= 4;
    printf("After x /= 4:       %d\n", x); // 11

    // Compound Modulus: x %= 3 means x = x % 3
    x %= 3;
    printf("After x %%= 3:       %d\n", x); // 2

    return 0;
}