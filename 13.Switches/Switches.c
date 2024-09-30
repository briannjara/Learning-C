#include <stdio.h>

int main (){

    // switch = A more alternative method to using many "else if" statements
    //          Allows a value to be tested for equality against many cases.

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    /*
    if (grade == 'A'){
        printf("You got an Perfect score!\n");
    }
    else if(grade == 'B'){
        printf("You got a Good score!\n");
    }
    else if (grade == 'C'){
        printf("You got a Fair score!\n");
    }
    else if (grade == 'D'){
        printf("You got a Bad score!\n");
    }
    else if (grade == 'F'){
        printf("You Failed!\n");
    }
    else{
        printf("That is not a valid grade");
    }

    =>The above is considered poor practice.

    */
   
   switch (grade){
        case 'A':
            printf("You got an Perfect score!\n");
            break;
        case 'B':
            printf("You got a Good score!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("You got a bad score!\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("That is not a valid grade");
   }

    return 0;
}