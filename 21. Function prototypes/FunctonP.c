#include <stdio.h>

void hello (char[], int);

int main (){

    // Function prototypes
    //      ---> Function declaration, w/o a body before main()
    //      ---> Ensures that calls to a function are made with correct arguments.
    
    //      ---> Allows the compiler to check the function calls before the function is defined.
    //      ---> Ensures that the function is defined before it is called.
    //      ---> Ensures that the function is defined with the correct arguments before it is called.
    //      ---> Ensures that the function is defined with the correct return type before it is called

    char name[] = "Dennis";
    int age = 18;

    hello(name, age);

    return 0;
}

void hello (char name[], int age){

    printf("Hello, my name is %s and I am %d years old.\n",name, age);

}