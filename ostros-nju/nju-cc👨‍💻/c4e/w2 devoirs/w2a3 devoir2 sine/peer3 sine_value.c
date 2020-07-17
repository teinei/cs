//This sine function should have input between 0 to 1.
#include<stdio.h>
#include<math.h>
int main(void){
	double sin_value,x;
	printf("Enter a positive value of x:");
	scanf("%lf",&x);
	sin_value=sin(x);
    if(x>0&&x<=1)
    {
    	printf("The sine value is %lf",sin_value);
	}
	else
	{
		printf("Invalid");
	}
    return 0;
}
