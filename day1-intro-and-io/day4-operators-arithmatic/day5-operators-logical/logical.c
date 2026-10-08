#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Day 5: Relational and Logical Operators\n\n");
    printf("Values: a = %d, b = %d\n\n", a, b);

    // 1. Relational Operators (Result is always 1 for True, 0 for False)
    printf("--- Relational Operators ---\n");
    printf("a < b   : %d\n", a < b);    // Less than
    printf("a > b   : %d\n", a > b);    // Greater than
    printf("a <= b  : %d\n", a <= b);   // Less than or equal to
    printf("a >= b  : %d\n", a >= b);   // Greater than or equal to
    printf("a == b  : %d\n", a == b);   // Equal to
    printf("a != b  : %d\n\n", a != b); // Not equal to

    // 2. Logical Operators
    printf("--- Logical Operators ---\n");
    // Logical AND (&&): True only if both conditions are True
    printf("(a < b) && (b == 20) : %d\n", (a < b) && (b == 20));

    // Logical OR (||): True if at least one condition is True
    printf("(a > b) || (b == 20) : %d\n", (a > b) || (b == 20));

    // Logical NOT (!): Inverts the result (True becomes False, False becomes True)
    printf("!(a == b)             : %d\n", !(a == b));

    return 0;
}