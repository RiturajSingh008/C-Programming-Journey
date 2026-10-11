#include <stdio.h>

int main() {
    // 1. Variable declaration and initialization
    int age = 19;
    float marks = 85.5;
    char grade = 'A';
    double fee = 55000.50;

    printf(" Day 3: Basic Data Types \n\n");

    // 2. Printing values using their format specifiers
    printf("Age: %d\n", age);
    printf("Marks: %.1f\n", marks);
    printf("Grade: %c\n", grade);
    printf("Fee: %.2lf\n\n", fee);

    // 3. Checking memory size using sizeof()
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of char: %d byte\n", sizeof(char));
    printf("Size of double: %d bytes\n", sizeof(double));

    return 0;
}
