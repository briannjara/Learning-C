#include <stdio.h>

int main() {
    /*
     * Variable = Allocated space in memory to store a value.
     * We refer to a variable's name to access the stored value.
     * That variable now behaves as if it was the value it contains.
     * BUT we need to declare what type of data we are storing.
     */

    int x;          // Declaration
    x = 123;        // Initialization
    int y = 321;    // Declaration + initialization

    int age = 25;   // Integer                               %d
    float gpa = 3.7; // Float                               %f
    char grade = 'A'; // Character                           %c
    char name[] = "John"; // Array of characters           %s

    // Constants
    const float PI = 3.14159;  // Cannot be modified later

    // Output the stored values using printf
    printf("Hello %s\n", name);
    printf("I am %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %.2f\n", gpa); // Format GPA to 2 decimal places

    return 0;
}

