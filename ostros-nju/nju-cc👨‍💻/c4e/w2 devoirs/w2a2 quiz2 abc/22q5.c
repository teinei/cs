#include <stdio.h>  
 int main(void) {
    int  a = 3, b = 4, c = -2;
    int q6=++a + b++; //a pre increment, b post increment
    printf("\n q6:%d \n",q6);//q5
    a = 3, b = 4, c = -2;
    printf("\n q6:%d \n",++a + b++);//q5
    return 0;
 }  