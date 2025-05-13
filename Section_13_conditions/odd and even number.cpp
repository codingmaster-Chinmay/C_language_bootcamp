#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	  printf("%d is an even number \n",num);
	  else
	  printf("%d is and odd number \n",num);
	
	if(num%2!=0)
	printf("%d is an odd number \n",num);
	
	else
	printf("%d is and even number \n",num);
	
	return 0;  
}
