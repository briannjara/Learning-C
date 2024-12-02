#include <stdio.h>

int main() {
    // switch statements provide a cleaner alternative to multiple if-else statements
    // They work best when comparing one variable against multiple constant values

    char grade;
    printf("Enter your grade (A/B/C/D/F): ");
    scanf("%c", &grade);

    // Good Practice: Use switch instead of multiple if-else when:
    // 1. Comparing a single variable against constant values
    // 2. Having 3 or more possible cases
    // 3. Need clear, readable code structure
   
    switch(grade) {
        case 'A':  // Each case represents a possible value
            printf("You got a Perfect score!\n");
            break;  // break prevents fall-through to next case
        case 'B':
            printf("You got a Good score!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("You got a bad score!\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:  // Handles any value that doesn't match above cases
            printf("That is not a valid grade\n");
    }

    // Note: Without break statements, execution would "fall through"
    // to the next case, which is usually not what you want

    return 0;
}