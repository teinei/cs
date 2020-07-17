#include<stdio.h>
int main(void){
    //
    //int a=3,b=4,c=0,d='1';
    //q9
    //printf("q1:%d\n",a%b);
    //q10
    //printf("q2:%d\n",b%a);
    //q11
    //printf("q3:%d\n",a<b);
    //q12
    //printf("q4:%d\n",c<b&&a>3);
    //q13
    //printf("q5:%d\n",a/b);
    //printf("q5:%d\n",a/b>c);
    //q14
    //c=a++;
    //printf("q6:%d\n",c);
    //q15
    //a=1,b=2,c=3;
    //printf("q7:%d\n",a-b*c);
    //q16
    //printf("q8:%d\n",c/a*b);
    //q17
    //int x = (a++ + --b); 
    //printf("q17:%d\n",x);
    //printf("q17:%d\n",a++ + --b);
    //q18
    //int x = (b = a = c);
    //printf("q18:%d\n",x);
    //q19
    int i=0,j=1,k=2;
    int x=0;
    //x = (i&&j);
    //printf("q19:%d\n",x);
    //q20
    //x=!!i;
    //printf("q20:%d\n",x);
    //q22 need to dig in
    i=4;//v1
    x= ( (i && (j = k)) || (k > j) );
    printf("q22:%d\n",x);
    //23
    //
    //
    //https://www.dcode.fr/boolean-expressions-calculator
    //printf("q:%d\n",x);
}