/******************************************************************************
Week 2 Devoir 2 Sine
*******************************************************************************/
#include <stdio.h>
#include <math.h>
/*
A program that can give the sine of a value between 0 and 1 (non inclusive).
*/
//define the constant PI
#define PI 3.14159265

int main () {
    //value that given
    double val; 
    //sine value outputed
    double sinva;
    //scanf the given value
    scanf("%lf",&val); 
    // calculate sine  
    sinva=sin(val); 
    /*
    check the value scan in and print the value
    */
    if(val>0&&val<1){ 
        //between 0 and 1, just print the value
        printf("\nThe sine value of %lf is %lf\n", val, sinva);
    }else{
        //otherwise, prompt the user the input value is invalid.
        printf("\nA value between 0 and 1(non inclusive) \n");
    }
    return(0);
}
