#include <stdio.h>

int main (){

    //arithmetic operators

    // % (modulus)  ---> remainder
    // ++(increment)
    // --(decrement)

    int x = 5;
    int y = 2;

    //int z = x + y;
    //int z = x - y;
    //int z = x * y;
    //float z = x / (float)y;

    x++;
    y--;

    int z = x % y;

    printf("%.d\n",z);


        /*Augmented assignment operators =  Used to replace where an operator
                                            takes a variable as one of its arguments
                                            and then assigns it back to the same variable.
                                            x = x + 1
                                            x+=1 
        
        
        */

       int k = 10;

       //k = k + 1;
       //k+= 1;

       //k = k * 2
       //k*=2

       //k = k / 2
       //k/=2

       //k = k % 2;
       //k%=2

       printf("%d",k);



    return 0;
}