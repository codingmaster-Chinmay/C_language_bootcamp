#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int year;
printf("Enter year: ");
scanf("%d",&year);
if(year % 400 == 0)
   printf("%d year is a leap year\n",year);
else if(year % 100==0)
printf("%d year is NOT  a leap year\n",year);
else if(year % 4 ==0)
printf("%d year is a leap year\n",year);
else 
printf("%d year is NOT a leap year\n",year);
return 0;
}
