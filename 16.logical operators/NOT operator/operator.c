#include <stdio.h>
#include <stdbool.h>

int main (){

    // logical operators = ! (NOT). Reverses the state of a condition.

    bool sunny = true;

    if(!sunny){ //if it is not sunny.......
        printf("\nIt is not sunny");
    }
    else{
        printf("\nIt is sunny");
    }

    return 0;
}