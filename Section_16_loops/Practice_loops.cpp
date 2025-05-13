//Practice Exercises for Loops in C

/*
write a program that receives a num from user - The program should print all the num
from 1 to n and vice versa

Example -  n= 5 
then 12345
54321
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n ;
	int i,j;
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i = 1; i <=n ; i++)
	{
		printf("%d",i);
		
	}
	printf("\n");
	for(j = n; j > 0; j--)
	{
		printf("%d",j);
	}
	return 0;
	
}
