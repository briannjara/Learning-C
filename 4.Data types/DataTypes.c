#include <stdio.h>
#include <stdbool.h>

int main() {
    // Common data types
    int number = 42;         // Whole numbers
    float decimal = 3.14;    // Decimal numbers (6-7 digits)
    double pi = 3.14159265;  // More precise decimals (15-17 digits)
    char letter = 'A';       // Single character
    char text[] = "Hello";   // String (character array)

    // Character types
    char a = 'a';                    // Single character               %c
    char b[] = "Bro";                // String (char array)           %s

    // Floating-point types
    float c = 3.14159;               // Single precision              %f
    double d = 1.75757575757557575;  // Double precision             %lf

    // Boolean type
    bool e = true;                   // Boolean (true/false)          %d

    // Character as integer types
    char f = 127;                    // Range: -128 to +127           %d
    unsigned char g = 255;           // Range: 0 to +255              %d

    // Short integer types
    short int h = 32767;             // Range: -32,768 to +32,767     %d
    unsigned short int i = 65535;    // Range: 0 to +65,535           %d

    // Integer types
    int j = 625376;                  // Standard integer              %d
    unsigned int k = 75427536;       // Range: 0 to ~4.2 billion      %u

    // Long long integer types
    long long int l = 2131627371638716783;    // Very large integer   %lld
    unsigned long long int m = 75427536;      // Range: 0 to 18 quintillion  %llu

    // Example usage (uncomment to test)
    // printf("Long long int value: %lld\n", l);
    // printf("Unsigned char value: %d\n", g);

    return 0;
}


