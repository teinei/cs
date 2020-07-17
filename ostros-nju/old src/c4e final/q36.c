#include<stdio.h>

//question 36
int mystery(int p, int q);

int main(void){
    //
    int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;

    for (i = 0; i < 5 ; i++)
        sum = sum + data[i];
    printf("%d\n", sum);
}

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}