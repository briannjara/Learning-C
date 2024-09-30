#include <stdio.h>
#include <stdbool.h>

int main (){

    char a = 'a';
    char b[] = "Bro";

    float c = 292929;
    double d = 1.75757575757557575757;  //double float   %lf

    bool e = true;  //True or False.

    char f = 127;  //Can store from -128 to +127
    unsigned char g = 255;  //Can store from 0 to +255     %d

    short int h = 5454; //from -32,768 to +32,767 
    unsigned short int i = 25225; //from 0 to +65,535     %d

    int j = 625376; //   %d
    unsigned k = 75427536; // 0 to 4 billon                %u                 

    long long int l = 2131627371638716783; //   %lld
    unsigned long long int m = 75427536; // 0 to 18 quintillion

   //printf("%lld",l);
    //printf("%d",g);
    return 0;
}


