#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    //int radius;
    //format specifiers %f=float %lf=double(long float)
    double radius;
    printf("Enter radius:");
    scanf("%lf", &radius);
    printf("volume is : %lf \n\n", 4 *radius*radius*radius/3 );
    return 0;
}