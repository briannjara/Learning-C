#include <stdio.h>

int main (){

    int age;

    printf("\nEnter your age :");
    scanf("%d",&age);

    if(age >= 18){
        printf("\nYour are now signed up");
    }
    else if(age == 0){
        printf("\nYou are not yet born");
    }
    else if(age < 0){
        printf("\nInvalid age");
    }
    else{
        printf("\nYou are too young to sign up");
    }

    return 0;
}
