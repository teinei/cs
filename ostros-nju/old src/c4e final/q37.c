#include<stdio.h>

//question 37
int main(void){
    //
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
    int *p = &a[0];
    printf("%d\n", *(p + i));
    //
}