#include <stdio.h>
#include <string.h>

int main (){

    char string1[] = "Dennis";
    char string2[] = "Muhami";

    //strlwr(string1);                       // converts string to lowercase
    //strupr(string1);                       // converts a string to uppercase
    //strcat(string1, string2);              // appends string2 to the end of string1
    //strncat(string1, string2, 1);          // appends n characters from string2 to string1  
    //strcpy(string1, string2);              // copy string2 to string   
    //strncpy(string1, string2, 4);          // copy n characters of string2 to string1

    //strset(string1, '?');                  // sets all characters of a string to be a given character 
    //strnset(string1, 'x', 1);              // sets first n characters of a string to a given character
    //strrev(string1);                       // reverse a string

    int result = strlen(string1);          // returns string length as int
    //.......

    printf("%s\n", string1);
    printf("%d", result);

    return 0;
}



