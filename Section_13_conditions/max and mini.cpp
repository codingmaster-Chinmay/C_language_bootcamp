#include<stdio.h>
#include<stdlib.h>
/*finding max and min between 2  numbers*/
int main()
{
	//3.5 ,5.2 
	//maximun - 5.2
	//minimum-3.5
	
	float num1,num2;
	printf("Enter num1: ");
	scanf("%f", &num1);
	printf("Enter num2: ");
	scanf("%f", &num2);
	
	if(num1>num2)
	{
		printf("MAXIMUM = %f \n",num1);
		printf("MINIMUM = %f \n",num2);
		
	}
	else
	{
		printf("MAXIMUM = %f \n", num2);
		printf("MINIMUM = %f \n", num1);
	}
	
	
	return 0;
}
