#include<stdio.h>
#include<stdlib.h>
int main()
{
	// its all about bunch of if and else conditions in the main body
// but too much conditions will be make code lengthy so 

int a,b,c;
int max,min;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("Enter third number: ");
scanf("%d", &c);

max= a;
min= b;
if(a<b)
{
	max = b;
	min = a;
}
if(max < c)
max = c;
if(c< min)
min = c;
printf("MAXIMUN between 3 numbers = %d\n",max);
printf("MINIMUM between 3 numbers = %d\n",min);
 return 0;
 }


