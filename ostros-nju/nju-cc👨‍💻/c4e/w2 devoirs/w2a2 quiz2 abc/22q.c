#include <stdio.h>  
 int main(void) {
    int  a = 3, b = 4, c = -2;
    //q3 
    int q3=++a + c;
    printf("\n q3:%d \n", q3);//q3
    //q4 initialization
    a = 3, b = 4, c = -2;
    int q4=a/b;
    printf("\n q4:%d \n", q4);//q4
    //q5 initialization
    a = 3, b = 4, c = -2;
    printf("\n q5:%d \n", b/a);//q5
    //q6 initialization
    int q6=++a + b++;
    printf("\n q6:%d \n",q6);//q5
    return 0;
 }  