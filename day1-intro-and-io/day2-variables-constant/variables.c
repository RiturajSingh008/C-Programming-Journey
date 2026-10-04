#include <stdio.h>

// Preprocessor constant macro
#define COLLEGE_CODE 5001

// Constant variable for mathematical precision
const float PI = 3.14159f;

/* Function to calculate and display circle properties */
void calculateCircleMetrics(float radius) {
    float area = PI * radius * radius;
    float circumference = 2.0f * PI * radius;

    printf("\n--- Circle Calculations ---\n");
    printf("Radius:        %.2f units\n", radius);
    printf("Circumference: %.2f units\n", circumference);
    printf("Area:          %.2f sq units\n", area);
}

int main(void) {
    // Basic variable declarations
    int studentId = 101;
    float radius = 7.0f; // Using 7 makes mental verification simple (Area ≈ 153.94)

    printf("========================================\n");
    printf("   Day 2: Variables & Constants Lab     \n");
    printf("========================================\n");
    printf("Institution Code (Macro): %d\n", COLLEGE_CODE);
    printf("Student ID:               %d\n", studentId);

    // Call computation function
    calculateCircleMetrics(radius);

    printf("========================================\n");
    return 0;
}