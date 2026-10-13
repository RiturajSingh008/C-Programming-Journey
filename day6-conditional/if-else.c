#include <stdio.h>

int main() {
    // Variable declaration and direct assignment
    int marks = 68;
    int passMark = 40;

    // Condition: Check if marks are greater than or equal to passing mark
    if (marks >= passMark) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}