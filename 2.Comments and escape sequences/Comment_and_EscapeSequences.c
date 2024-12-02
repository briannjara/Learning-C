#include <stdio.h>

int main() {
    // Comments in C serve two main purposes:
    // 1. Making code more readable and maintainable
    // 2. Temporarily disabling code during debugging

    // Single-line comments: Everything after // on the same line is ignored
    printf("Hello!\n");  // This comment explains the code to the left

    /* Multi-line comments: Everything between /* and */ is ignored
     * They're great for longer explanations
     * or temporarily disabling multiple lines of code
     */

    // Escape Sequences - Special characters in C:
    printf("1. New line:\nStarting on a new line\n");
    printf("2. Tab:\tCreates space\tlike this\n");
    printf("3. Quotes: \"Text in quotes\"\n");
    printf("4. Backslash: C:\\Program Files\\\n");

    /* Common Escape Sequences:
     * \n - New line
     * \t - Tab
     * \" - Double quote
     * \\ - Backslash
     * \' - Single quote
     * \b - Backspace
     * \r - Carriage return
     */

    return 0;
}