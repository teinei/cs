/*
Write a C program that has a function that 
prints a table of values for sine and cosine between (0, 1). 
You will upload your program as a text file.
*/
#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void){
    double interval;
    int i;
    for(i = 0; i <10; i++){
        interval = i/10.0;
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
        printf("cos( %lf ) = %lf \t", interval, fabs(cos(interval)));
    }

    printf("\n+++++++\n");
    return 0;
}