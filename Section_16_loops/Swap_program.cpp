#include<stdio.h>
//Swap two floating point variables 

int main()
{
	float a = 7.8;
	float b = 3.4;
	float temp;
	printf("a = %f\n",&a);
	printf("b = %f\n",&b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %f\n",&a);
	printf("b = %f\n",&b);
	return 0; 	
}


