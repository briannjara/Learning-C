#include <stdio.h>
#include <math.h>

int main (){

    const double PI = 3.141592653;
    double radius;
    double area;
    double circumference;

    printf("Enter the radius of the circle :");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("\nCircumference :%lf\n", circumference);
    printf("Area :%lf", area);

    return 0;
}