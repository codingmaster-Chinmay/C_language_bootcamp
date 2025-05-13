#include<stdio.h>
#include<stdlib.h>
int main()
{
	float data;
	printf("Enter the data of floating point type: ");
	scanf("%f",&data);
	printf("The integer part=%d\n",(int)data);
	printf("The Decimal part(after the floating type)=%f\n",data-(int)data);
	return 0;
}
