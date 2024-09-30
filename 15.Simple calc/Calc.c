#include <stdio.h>

int main (){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the first number :");
    scanf("%lf", &num1);
    
    printf("Enter the second number :");
    scanf("%lf", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf is equal to %.2lf",num1 ,num2 ,result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf is equal to %.2lf",num1 ,num2 ,result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf is equal to %.2lf",num1 ,num2 ,result);
            break;
        case '/':
            result = num1 / num2;
            printf("%.2lf / %.2lf is equal to %.2lf",num1 ,num2 ,result);
            break;
        default:
            printf("\n%c ,Invalid operator", operator);
    }

    return 0;
}
