
#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1,num2;
char mathOperation;

	printf("Enter what math operation you would like to use: ('+','-',..)");
  scanf("%c",&mathOperation);
  printf("Enter num1: ");
  scanf("%d",&num1);
  printf("Enter num2: ");
  scanf("%d", &num2);
  
  switch(mathOperation)
  {
     case '+':
     printf("%d %c %d = %d\n",num1, mathOperation, num2,num1+num2);
     break;
     case '-':
     printf("%d %c %d = %d\n",num1,mathOperation,num2,num1-num2);
     break;
     case '*':
      printf("%d %c %d = %d\n",num1,mathOperation,num2,num1*num2);
     break;
     case '/':
     //has some different logic and method
     if(num2==0)
        //for division the denominator should be not  equal to zero
        printf("You cannot divide by 0! \n");
        else
        printf("%d %c %d = %d\n",num1,mathOperation,num2,num1/num2);
     break;
     case '%'://division but condition of remainder
     if(num2==0)
        //for division the denominator should be not  equal to zero
        printf("You cannot divide by 0! \n");
        else
        printf("%d %c %d = %d\n",num1,mathOperation,num2,num1%num2);
     break;
     
     //if there is no condition from this there must be a default condition
     default:
     printf("Wrong mathematical operation..Try again.\n");
     break;
     }
  return 0;
  }

