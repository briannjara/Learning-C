#include <stdio.h>
#include <math.h>

int main (){

    double length;
    double width;
    double hypotenuse;

    printf("Enter the base :");
    scanf("%lf",&length);

    printf("\nEnter the height :");
    scanf("%lf",&width);

    hypotenuse = sqrt(length*length + width*width);
    //hypotenuse = sqrt((pow(length, 2)) + (pow(width, 2)));

    printf("\nThe hypotenuse of the triangle is %lf", hypotenuse);

    return 0;
}