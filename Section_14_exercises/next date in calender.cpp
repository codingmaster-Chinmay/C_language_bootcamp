#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Find the next date!
int main()
{
int day,month,year;
int leapYear= 0;//default

printf("Enter the day: ");
scanf("%d",&day);

printf("Enter the month: ");
scanf("%d",&month);

printf("Enter the year: ");
scanf("%d",&year);
//Find if a given year is leap year or not leap
if(month==2)//if its feb
   if(year%4==0 && (year%100!=0 ||year%400==0))
    leapYear = 1;

     day+=1;//day = day +1;
           switch(month)//month having days 31
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
if (day<=31)
     break;//it satisfies the condition that the months are having 31 days and it will execute the block
     case 4:
     case 6:
     case 9:
     case 11:
if(day<=30)//it satisfies the condition that the months are having 30 days
        break;
case 2://february
if(day<=29 && leapYear ==1)
break;
else if(day<=28)
break;
default:
day = 1;
month+=1;//jumos to next month
if(month >12)
{
month =1;
year +=1;//year is changes next year

return 0;
}
