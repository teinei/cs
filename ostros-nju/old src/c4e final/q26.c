#include<stdio.h>

//question 26
int foobar(int* n);

int main(void){
    int k = 6;
    printf("foobar(k) = %d,",foobar(&k) );
    printf(" k = %d\n", k);
}

int foobar(int* n){
     *n = *n +1;
     return *n;
}