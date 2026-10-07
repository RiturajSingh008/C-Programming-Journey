#include <stdio.h>

// Defining a constant using #define
#define PI 3.14

int main() {
    // 1. Variable declaration and initialization
    int radius = 5;
    float area;

    // 2. Constant using the 'const' keyword
    const int collegeCode = 101;

    // 3. Calculation
    area = PI* radius * radius;

    // 4. Output
    printf("=== Day 2: Variables and Constants ===\n\n");
    printf("College Code: %d\n", collegeCode);
    printf("Radius: %d\n", radius);
    printf("Area of Circle: %.2f\n", area);

     return 0;
}