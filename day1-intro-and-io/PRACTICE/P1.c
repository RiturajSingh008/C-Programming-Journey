#include <stdio.h>
#include <stdbool.h>

// Preprocessor Constant (Macro)
#define APP_TITLE "C Fundamentals & Type Conversion Master Program"

int main() {

    // 1. BASIC I/O, VARIABLES & CONSTANTS
    printf("==========================================\n");
    printf("%s\n", APP_TITLE);
    printf("==========================================\n\n");

    const int PASS_MARK = 40;  // Read-only constant
    int studentID;

    printf("[1. Input / Output]\n");
    printf("Enter a Student Roll/ID Number: ");
    scanf("%d", &studentID);
    printf("Registered Student ID: %d\n\n", studentID);

    // ==========================================
    // 2. PRIMARY DATA TYPES & SIZES
    // ==========================================
    char grade = 'A';
    int totalMarks = 437;
    float dailyScore = 87.5f;
    double exactAverage = 87.400000;
    bool isPassed = true;

    printf("[2. Data Types & Memory Sizes]\n");
    printf("char:    %c   (Size: %zu byte)\n", grade, sizeof(grade));
    printf("int:     %d (Size: %zu bytes)\n", totalMarks, sizeof(totalMarks));
    printf("float:   %.1f(Size: %zu bytes)\n", dailyScore, sizeof(dailyScore));
    printf("double:  %.4lf (Size: %zu bytes)\n", exactAverage, sizeof(exactAverage));
    printf("bool:    %d   (Size: %zu byte)\n\n", isPassed, sizeof(isPassed));

    // ==========================================
    // 3. ARITHMETIC OPERATORS
    // ==========================================
    int num1 = 17;
    int num2 = 5;

    printf("[3. Arithmetic Operators]\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);  // Addition
    printf("%d - %d = %d\n", num1, num2, num1 - num2);  // Subtraction
    printf("%d * %d = %d\n", num1, num2, num1 * num2);  // Multiplication
    printf("%d / %d = %d (Integer truncation)\n", num1, num2, num1 / num2); // Integer division
    printf("%d %% %d = %d (Modulus / Remainder)\n\n", num1, num2, num1 % num2); // Modulo

    // ==========================================
    // 4. RELATIONAL & LOGICAL OPERATORS
    // ==========================================
    int age = 19;
    int hasValidID = 1; // 1 = True, 0 = False

    printf("[4. Relational & Logical Operators]\n");
    printf("Age >= 18:              %d\n", (age >= 18));
    printf("Age >= 18 AND Has ID:   %d\n", (age >= 18 && hasValidID));
    printf("Age < 18 OR Has ID:     %d\n", (age < 18 || hasValidID));
    printf("NOT Has ID (!hasValid): %d\n\n", (!hasValidID));

    // ==========================================
    // 5. TYPE CONVERSION (TYPECASTING)
    // ==========================================
    printf("[5. Type Conversion]\n");

    // A. Implicit Conversion (Type Promotion / Automatic by Compiler)
    int intVal = 10;
    char charVal = 'B';       // ASCII value of 'B' is 66
    float floatVal = 2.5f;

    // 'charVal' is implicitly promoted to int (66), then the sum is promoted to float
    float implicitResult = intVal + charVal + floatVal; // 10 + 66 + 2.5 = 78.5
    printf("Implicit Type Conversion (10 + 'B'(66) + 2.5f): %.2f\n", implicitResult);

    // B. Explicit Conversion (Manual Typecasting: (type)expression)
    int subjectCount = 5;
    
    // Without explicit cast: integer division gives 437 / 5 = 87 (lost decimals)
    int truncatedAverage = totalMarks / subjectCount;
    printf("Without Cast (int / int):  %d (data lost)\n", truncatedAverage);

    // With explicit cast: (float) totalMarks forces floating-point division
    float preciseCalculatedAvg = (float)totalMarks / subjectCount; 
    printf("Explicit Cast ((float)totalMarks / count): %.2f\n", preciseCalculatedAvg);

    // Casting float down to integer (truncation)
    float rawPercentage = 87.95f;
    int roundedDown = (int)rawPercentage; // Drops the fractional part (.95)
    printf("Float to Int Cast ((int)87.95f): %d\n", roundedDown);

    return 0;
}