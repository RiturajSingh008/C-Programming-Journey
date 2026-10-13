#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 5;
    char op = '+'; // Yahan choice change kar sakte ho: '+', '-', '*', '/'

    switch (op) {
        case '+':
            printf("Addition: %d\n", num1 + num2);
            break; // switch se bahar aane ke liye zaroori hai

        case '-':
            printf("Subtraction: %d\n", num1 - num2);
            break;

        case '*':
            printf("Multiplication: %d\n", num1 * num2);
            break;

        case '/':
            printf("Division: %d\n", num1 / num2);
            break;

        default:
            // Agar upar ka koi bhi case match na ho
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}