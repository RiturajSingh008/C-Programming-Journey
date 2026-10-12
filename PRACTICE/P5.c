#include <stdio.h>
#define PASS_MARK 40

int main() {
    const int MAX_MARKS = 100;
    
    // Direct assignment: no need to type it every time you run the code
    int rollNumber = 101; 

    printf("Roll Number: %d\n", rollNumber);
    printf("Passing Mark: %d\n", PASS_MARK);
    printf("Max Marks: %d\n\n", MAX_MARKS);

    char section = 'A';
    int attendanceCount = 45;
    float initialScore = 78.5f;

    printf("Section: %c\n", section);
    printf("Attendance: %d\n", attendanceCount);
    printf("Initial Score: %f\n\n", initialScore);

    int a = 17;
    int b = 5;

    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Integer Division (a / b): %d\n", a / b);
    printf("Modulus Remainder (a %% b): %d\n\n", a % b);

    int age = 19;
    int hasIdCard = 1;

    printf("Relational Check (age >= 18): %d\n", (age >= 18));
    printf("Logical AND (age >= 18 && hasIdCard): %d\n", (age >= 18 && hasIdCard));
    printf("Logical OR (age < 18 || hasIdCard): %d\n", (age < 18 || hasIdCard));
    printf("Logical NOT (!hasIdCard): %d\n\n", (!hasIdCard));

    int asciiShifted = section + 10;
    printf("Implicit Conversion (char 'A' + 10): %d\n", asciiShifted);

    int totalMarksScored = 437;
    int totalSubjects = 5;

    float accuratePercentage = (float)totalMarksScored / totalSubjects;
    printf("Explicit Cast ((float)total / subjects): %f\n", accuratePercentage);

    return 0;
}