#include <stdio.h>
#include <stdbool.h>

int main (){

    //logical operators = && (AND). Checks if two conditions are true.

    float temp;
    bool sunny = true;
    
    printf("Enter temp in (C) :");
    scanf("%f",&temp);

    if(temp >= 0 && temp <= 30  && sunny == true){
        printf("\nNormal temperature");
    }
    else{
        printf("\nAbnormal temperature");
    }

    return 0;
}
