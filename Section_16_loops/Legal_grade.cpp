//Write a program that gets input as valid grade that:
//1. Greater than 0
//2.less than 100

//The program should print a corresponding message with the grade itself 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int grade; //0<= grade <=100
	printf("Enter a grade between 0 to 100: ");
	scanf("%d",&grade);
	
	while(grade <0  || grade >100)
	{
		printf("Enter a grade between 0 to 100: ");
		scanf("%d",&grade);
		
	}
	printf("Thanks !You've inserted a legit  grade  of %d\n ",grade);
    return 0;
}



