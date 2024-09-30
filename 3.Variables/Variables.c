#include <stdio.h>

int main(){
    /*
    Variable = Allocated space in memory to store a value.
               We refer to a variable's name to access the stored value.
               That variable now behaves as if it was the value it contains.
               BUT we need to declare what type of data we are storing. 
    */

   int x;   //declaration
   x = 123; //Initialization
   int y = 321;  //declaration + initialization

   int age = 18; //integer                               %d

   float gpa = 1.75; //float                             %f
   char grade = 'A'; //character                         %c
   char name[] = "Dennis"; //array of characters         %s

   printf("Hello %s\n",name);
   printf("I am %d years old\n",age);
   printf("Your average grade is %c\n",grade);
   printf("Your gpa is %f",gpa);

    return 0;
}

