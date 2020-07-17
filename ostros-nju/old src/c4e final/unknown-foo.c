#include<stdio.h>

int foo(void);

int main(void){
    //
    int x = foo();
    printf("%d\n",x);
    //
}

int foo(void){
    //
    double y=2.2;
    return y;
    //
}