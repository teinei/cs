/*
 * In this peer reviewed assignment, 
 * you will use an array to calculate an average 
 * from raw data—specifically the average weight 
 * of the northern elephant seal (Mirounga angustirostris). 
 * You will submit a file with your program for your fellow learners to review, 
 * and you will review three of your fellow learners' programs.
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
