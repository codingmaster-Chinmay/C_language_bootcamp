#include<stdio.h>
int main()
{
	int num;
	int units,tens,hundreds;
	printf("Enter the 3- digit number: ");
	scanf("%d",&num);
	
	units = num % 10;
	tens =  (num/10) % 10;
	hundreds = num / 100;
	
	if(hundreds<tens && tens<units)
	printf("ASCENDING\n");
	else
	printf("NOT ASCENDING\n");
	
	return 0;
	
}
