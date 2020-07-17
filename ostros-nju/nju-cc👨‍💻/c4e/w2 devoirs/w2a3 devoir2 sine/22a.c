#include <stdio.h>
#include <math.h>
//A program that can give the sine of a value between 0 and 1 (non inclusive). 

//define the constant PI
#define PI 3.14159265

int main () {
    double val; //value that given
    double sinva; //sine value outputed
    scanf("%lf",&val);  //scanf the given value 
    sinva=sin(val); // calculate sine
    //print the value
    if(val>0&&val<1){ //check the value scan in
        //between 0 and 1, just print the value
        printf("\nThe sine value of %lf is %lf\n", x, sinva);
    }else{
        //otherwise, prompt the user the input value is invalid.
        printf("\nA value between 0 and 1(non inclusive) \n");
    }
    return(0);
}