#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	int units, tens, hundreds;
	printf("Enter a 3 - Digit number: ");
	scanf("%d",&num);
	units = num % 10;
	tens = (num / 10)%10;
	hundreds = num /100;
	
	printf("The sum of the digits in %d is %d \n",num,units+tens+hundreds);
	return 0;
	
	
}
