#include<stdio.h>

//question 31
int mystery(int p, int q);

int main(void){
    int k = mystery(2, 6);//q31
    k = mystery(7, 91);//q32
    //printf("foobar(k) = %d,",foobar(&k) );
    printf(" k = %d\n", k);
}

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}