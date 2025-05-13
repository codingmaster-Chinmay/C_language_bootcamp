#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int month;
printf("Enter the month number: ");
scanf("%d",&month);
//1---> january..
//use switch case for this
switch(month)
{
case 1:
printf("January\n");
break;
case 2:
printf("February\n");
break;
case 3:
printf("March\n");
break;
case 4:
printf("April\n");
break;
case 5:
printf("May\n");
break;
case 6:
printf("June\n");
break;
case 7:
printf("July\n");
break;
case 8:
printf("August\n");
break;
case9:
printf("September\n");
break;
case 10:
printf("Octobeer\n");
break;
case 11:
printf("November\n");
break;
case 12:
printf("December\n");
break;
default:
printf("Error! Try again some month between 1 to 12..!\n");
break;
return 0;
}

}
