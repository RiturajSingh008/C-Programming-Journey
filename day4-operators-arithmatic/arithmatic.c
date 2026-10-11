#include <stdio.h>

int main() {
    // 1. Variable declaration
    int a = 20;
    int b = 6;
    
    int sum, diff, prod, div, rem;

    // 2. Arithmetic operations
    sum  = a + b;   // Addition
    diff = a - b;   // Subtraction
    prod = a * b;   // Multiplication
    div  = a / b;   // Integer Division (returns quotient)
    rem  = a % b;   // Modulo Operator (returns remainder)

    // 3. Display results
    printf("=== Day 4: Arithmetic Operators ===\n\n");
    printf("Number 1 (a) = %d\n", a);
    printf("Number 2 (b) = %d\n\n", b);

    printf("Addition (a + b)       = %d\n", sum);
    printf("Subtraction (a - b)    = %d\n", diff);
    printf("Multiplication (a * b) = %d\n", prod);
    printf("Division (a / b)       = %d\n", div);
    printf("Modulo (a %% b)         = %d\n", rem);

    return 0;
}