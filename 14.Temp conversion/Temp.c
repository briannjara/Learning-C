#include <stdio.h>
#include <ctype.h>

int main (){

    char unit;
    float temp;
    float tempF;

    printf("\nIs the Temperature in (F) or (C)? :");
    scanf("%c",&unit);

   unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter Temperature in Celsius: ");
        scanf("%f",&temp);

        tempF = (temp * 9/5) + 32;
        printf("%.2f degree Celsius is equal to %.2f degree Fahrenheit.\n",temp,tempF);
    }
    else if(unit == 'F'){
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f",&temp);

        tempF = (temp - 32) * 5/9;
        printf("%.2f degree Fahrenheit is equal to %.2f degree Celsius", temp, tempF);
    }
    else{
        printf("Not valid unit of measurement");
    }

    return 0;
}