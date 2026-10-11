#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // 1. Relational
    printf("a < b  : %d\n", a < b);   // 1 (True)
    printf("a == b : %d\n", a == b);  // 0 (False)

    // 2. Logical
    printf("(a < 15) && (b > 15) : %d\n", (a < 15) && (b > 15)); // 1 && 1 = 1
    printf("(a > 15) || (b > 15) : %d\n", (a > 15) || (b > 15)); // 0 || 1 = 1
    printf("!(a < b)             : %d\n", !(a < b));             // !1 = 0

    // 3. Bitwise
    int x = 5; // Binary: 0101
    int y = 3; // Binary: 0011
    printf("5 & 3  : %d\n", x & y);   // Binary 0001 = 1
    printf("5 | 3  : %d\n", x | y);   // Binary 0111 = 7
    printf("5 ^ 3  : %d\n", x ^ y);   // Binary 0110 = 6

    return 0;
}