#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int b;
	printf("Enter the current year: ",a);
	scanf("%d", &a);
	printf("Enter your current age: ",b);
	scanf("%d",&b);
	printf("your birth year is:%d",a-b);
	return 0;
}
