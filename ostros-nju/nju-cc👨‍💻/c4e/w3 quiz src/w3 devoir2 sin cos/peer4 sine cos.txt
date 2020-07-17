#include<stdio.h>
#include<math.h>
//contains sine, cosine functions etc..
int main(void)
{
    float interval=0.1;
    /*to take input directly in radians*/
    printf("value  \t\tsin(value)  \t\tcos(value)");
    printf("\n");
    while(interval<=1)
    {
        
        printf("%f\t%f\t%f\t", interval, sin(interval), cos(interval));
        printf("\n");
         interval += 0.1;
    }

    return 0;
}