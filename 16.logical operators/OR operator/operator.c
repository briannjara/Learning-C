#include <stdio.h>

int main (){

    // logical operators =|| (OR). Checks at least one condition is true.

    float temp;

    printf("Enter temp in (C) :");
    scanf("%f",&temp);

    if(temp <=0 || temp >= 30){
        printf("Danger zone");
    }
    else{
        printf("Safe zone");
    }

    return 0;
}