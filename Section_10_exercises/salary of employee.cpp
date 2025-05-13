#include<stdio.h>
#include<stdlib.h>
int main()
{
	//salary($/hours)
	//Total hours worked in a month(hours)
	float salary;
	//as we know most of the salary figures are in whole integer  but it can also be in floating point type
 int totalhours;
 printf("Enter the salary pf employee in $/hrs: ");
 scanf("%f",&salary);
 printf("Enter the number of hours you worked in last month:  ");
 scanf("%d",&totalhours);
 printf("your expected salary per month is:%.2lf",salary*totalhours);
 return 0;
 
}
