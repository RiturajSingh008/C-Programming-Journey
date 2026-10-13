#include <stdio.h>

int main() {
    int marks = 82; // Yahan marks change karke test kar sakte ho

    // Step 1: Sabse pehle check karega kya marks 90 ya usse zyada hain
    if (marks >= 90) {
        printf("Grade: A\n");
    } 
    // Step 2: Agar pehla false hua, toh check karega kya 75 ya usse zyada hain
    else if (marks >= 75) {
        printf("Grade: B\n");
    } 
    // Step 3: Agar upar ke dono false hue, toh check karega kya 50 ya usse zyada hain
    else if (marks >= 50) {
        printf("Grade: C\n");
    } 
    // Step 4: Agar upar ki koi bhi condition match nahi hui (marks < 50)
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}