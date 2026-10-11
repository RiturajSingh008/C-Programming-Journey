#include <stdio.h>

int main() {
    printf("==================================================\n");
    printf(" 1. INCREMENT AND DECREMENT (STEP-BY-STEP)\n");
    printf("==================================================\n");

    int a = 5;
    printf("Initial value of a: %d\n\n", a);

    // Post-increment (a++): Uses current value first, increments afterward
    printf("Value printed by a++  : %d (used original value first)\n", a++);
    printf("Value of a on next line: %d (now incremented by 1)\n\n", a);

    // Pre-increment (++a): Increments first, uses updated value immediately
    printf("Value printed by ++a  : %d (incremented before printing)\n", ++a);
    printf("Value of a on next line: %d\n\n", a);

    // Post-decrement (a--): Uses current value first, decrements afterward
    printf("Value printed by a--  : %d (used current value first)\n", a--);
    printf("Value of a on next line: %d (now decremented by 1)\n\n", a);

    // Pre-decrement (--a): Decrements first, uses updated value immediately
    printf("Value printed by --a  : %d (decremented before printing)\n", --a);
    printf("Value of a on next line: %d\n\n", a);


    printf("==================================================\n");
    printf(" 2. LESS THAN (<) AND LOGICAL OPERATORS\n");
    printf("==================================================\n");

    int age = 17;
    int hasPermission = 1; // 1 = True, 0 = False

    printf("Given variables: age = %d, hasPermission = %d\n\n", age, hasPermission);

    // Relational Operator: Less Than (<)
    // Checks if age is strictly less than 18 (True returns 1, False returns 0)
    printf("1. Less Than (age < 18)                 : %d (True: 17 < 18)\n", age < 18);

    // Logical AND (&&): True only if BOTH conditions are true
    int canEnterWithParent = (age < 18) && (hasPermission == 1);
    printf("2. Logical AND ((age < 18) && hasPermission) : %d (Both are true)\n", canEnterWithParent);

    // Logical OR (||): True if AT LEAST ONE condition is true
    int isAllowed = (age >= 18) || (hasPermission == 1);
    printf("3. Logical OR ((age >= 18) || hasPermission)  : %d (At least one is true)\n", isAllowed);

    // Logical NOT (!): Inverts the Boolean truth value
    printf("4. Logical NOT (!(age < 18))                  : %d (Inverts 1 to 0)\n", !(age < 18));

    return 0;
}