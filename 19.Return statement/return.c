#include <stdio.h>

double square (double x){
       
    return x * x;
}

int main (){

    //return = returns a value back to a calling function

    double x = square(3);
    printf("%f\n", x);

    return 0;
}