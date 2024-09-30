#include <stdio.h>

int main (){

    //Format specifier (%) = Defines and formats a type of data to be displayed.

    // %.1 = decimal precision
    // %1  = minimum field width
    // %-  = left align

    float item1 = 5.50;
    float item2 = 65.50;
    float item3 = 100.99;

    printf("Item 1: $%f\n\n",item1); //control

    printf("Item 1: $%-8.2f\n",item1);
    printf("Item 2: $%-8.2f\n",item2);
    printf("Item 3: $%-8.2f\n",item3);

    return 0;
}