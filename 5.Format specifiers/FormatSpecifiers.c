#include <stdio.h>

int main() {
    // Format Specifiers Guide:
    // %d  - integers
    // %f  - floating-point numbers
    // %c  - single characters
    // %s  - strings
    // %x  - hexadecimal
    // %p  - pointers

    // Modifiers for format specifiers:
    // %.2f - control decimal precision (2 decimal places)
    // %5d  - minimum field width (5 characters)
    // %-5d - left-align within field width
    
    float item1 = 5.50;
    float item2 = 65.50;
    float item3 = 100.99;

    // Basic floating-point output
    printf("Basic format: $%f\n", item1);  // Prints all decimal places

    // Formatted for clean currency display
    printf("\nFormatted Currency Display:\n");
    printf("Item 1: $%-8.2f\n", item1);   // Left-aligned, 2 decimal places
    printf("Item 2: $%-8.2f\n", item2);   // 8 characters wide
    printf("Item 3: $%-8.2f\n", item3);   // Consistent column width

    // Additional examples:
    int num = 42;
    printf("\nMore Format Examples:\n");
    printf("Integer: %d\n", num);          // Basic integer
    printf("Padded: %05d\n", num);         // Pad with zeros
    printf("Width: %5d\n", num);           // Right-aligned in 5 spaces

    return 0;
}