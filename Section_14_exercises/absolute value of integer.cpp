#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num;
	 printf("Enter the Integer(whether positive/negative)");
	 scanf("%d",&num);
	 
	 if(num<0)
	 printf("The absoulute value of %d is |%d|\n",num,(-1)*num);
	 else
	 printf("Th absolute value of %d is |%d|\n",num,num);
	 return 0;
}
