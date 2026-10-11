#include <stdio.h> 

// ========================================================================
// TOPIC 2: CONSTANTS (#define)
// WHERE TO USE: Fixed values known before compilation that apply program-wide
// (e.g., standard minimum passing score, tax percentage).
// ========================================================================
#define PASS_MARK 40

int main() {
    // ========================================================================
    // TOPIC 1 & 2: INPUT / OUTPUT (I/O), VARIABLES & CONSTANTS
    // WHERE TO USE: 
    // - Variables: Storing user-provided data that varies per execution.
    // - const: Creating read-only constraints that must not change during execution.
    // - scanf / printf: Interacting with keyboard input and terminal output.
    // ========================================================================
    const int MAX_MARKS = 100; // Locked upper limit
    int rollNumber;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber); // Storing integer using address operator &

    printf("Roll Number: %d\n", rollNumber);
    printf("Passing Mark: %d\n", PASS_MARK);
    printf("Max Marks: %d\n\n", MAX_MARKS);

    // ========================================================================
    // TOPIC 3: DATA TYPES & BASIC FORMAT SPECIFIERS (%c, %d, %f)
    // WHERE TO USE:
    // - char (%c): Storing single letters (grades, sections, gender codes).
    // - int  (%d): Whole numbers/counts without fractional parts.
    // - float(%f): Real numbers requiring decimal values (measurements, rates).
    // ========================================================================
    char section = 'A';
    int attendanceCount = 45;
    float initialScore = 78.5f;

    printf("Section: %c\n", section);
    printf("Attendance: %d\n", attendanceCount);
    printf("Initial Score: %f\n\n", initialScore);

    // ========================================================================
    // TOPIC 4: ARITHMETIC OPERATORS (+, -, *, /, %)
    // WHERE TO USE:
    // - +, -, *: Calculating sums, balances, and totals.
    // - /: Integer division (truncates fractional remainder when both are ints).
    // - %: Modulus remainder (useful for checking even/odd, digit extraction).
    // ========================================================================
    int a = 17;
    int b = 5;

    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Integer Division (a / b): %d\n", a / b); // 17 / 5 = 3
    printf("Modulus Remainder (a %% b): %d\n\n", a % b); // 17 % 5 = 2

    // ========================================================================
    // TOPIC 5: LOGICAL & RELATIONAL OPERATORS (>=, &&, ||, !)
    // WHERE TO USE:
    // - Relational (>=): Validating thresholds (e.g., adult age check).
    // - && (AND): Requiring all conditions to be valid (age >= 18 AND has ID).
    // - || (OR): Requiring at least one qualifying condition to pass.
    // - ! (NOT): Inverting truth flags (flipping 1 to 0 or 0 to 1).
    // Note: C treats 1 as TRUE and 0 as FALSE.
    // ========================================================================
    int age = 19;
    int hasIdCard = 1; // 1 = True, 0 = False

    printf("Relational Check (age >= 18): %d\n", (age >= 18));
    printf("Logical AND (age >= 18 && hasIdCard): %d\n", (age >= 18 && hasIdCard));
    printf("Logical OR (age < 18 || hasIdCard): %d\n", (age < 18 || hasIdCard));
    printf("Logical NOT (!hasIdCard): %d\n\n", (!hasIdCard));

    // ========================================================================
    // TOPIC 6: TYPE CONVERSION (IMPLICIT & EXPLICIT)
    // WHERE TO USE:
    // - Implicit: Automatically promoting smaller types (char to int ASCII value)
    //   during arithmetic expressions.
    // - Explicit ((float)): Forcing accurate floating-point division when both
    //   operands are integers, preventing loss of decimal accuracy.
    // ========================================================================
    
    // Implicit Conversion: char 'A' (ASCII 65) is automatically converted to int
    int asciiShifted = section + 10; // 65 + 10 = 75
    printf("Implicit Conversion (char 'A' + 10): %d\n", asciiShifted);

    int totalMarksScored = 437;
    int totalSubjects = 5;

    // Explicit Typecasting: (float) forces decimal precision in division
    float accuratePercentage = (float)totalMarksScored / totalSubjects; // 87.400000
    printf("Explicit Cast ((float)total / subjects): %f\n", accuratePercentage);

    return 0;
}