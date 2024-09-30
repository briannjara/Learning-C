#include <stdio.h>

void birthday (char name[],int age){     // parameters -> What a function expects
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old", age);
}

int main (){

    char name[] = "Dennis";
    int age = 25;

    birthday(name, age); // Arguments -> Anything you pass to a function

    return 0;
}