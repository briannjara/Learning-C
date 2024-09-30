#include <stdio.h>
#include <string.h>

int main (){

    char name[25];  //bytes


    printf("\nWhats your name? :");
    //scanf("%s", &name);
    fgets(name, 25, stdin);          //Able to take white spaces
    name[strlen(name)-1] = '\0';     //To remove the \n

    int age;

    printf("How old are you? :");
    scanf("%d", &age);


    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old\n", age);


    return 0;
}