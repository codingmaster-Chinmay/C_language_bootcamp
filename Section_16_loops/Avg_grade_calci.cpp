#include<stdio.h>
#include<stdlib.h>
/* Amazing Intermediate Calculator*/

int main()

{
	int num1,num2;
	char mathOperation;
	
	printf("Enter which math Operation you would like to choose: ('+','-',....)\n");
	scanf("%c",&mathOperation);
	printf("Enter num1\n");
	scanf("%d",&num1);
	printf("Enter num2\n");
	scanf("%d",&num2);
	
	switch(mathOperation)
	{
		case '+':
			printf("%d %c %d = %d\n",num1,mathOperation,num2,num1+num2);
			break;

		case '-':
			printf("%d %c %d = %d\n",num1,mathOperation,num2,num1-num2);
			break;
		case '*':
			printf("%d %d %d = %d\n",num1,mathOperation,num2, num1*num2);
			break;
		case '/':
			if (num2==0)
				printf("You cannot divide by 0!\n");
			else
				printf("%d %c %d = %d\n,",num1,mathOperation,num2,num1/num2);
				break;
		case '%':
			if (num2==0)
				printf("You cannnot get remainder by divide with 0!\n");
			else
				printf("%d %c %d = %d\n", num1, mathOperation, num2, num1%num2);
				break;
		default:
			printf("Wrong mathematical Operation, Try Again !\n");
			break;
					
	}
	return 0;
	
	
}


