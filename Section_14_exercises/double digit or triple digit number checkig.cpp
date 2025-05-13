//check if a number is double digit or triple digit
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//"If given number is "double digit "/"triple-digit"
//"neither..
//1,2,3...,10,11,12...,95,100,101...,959,1000,1001,..
int main()
{
int num;
printf("Please Enter a number: ");
scanf("%d",&num);
//when the number is double digit - 
//when it is greater than equal than 10 and less than equal to 99
if(num>=10 && num<=99)
printf("This number is a 'double-digit' number \n");
else if(num>=100 && num<=999)
printf("This number is a 'triple-digit' number \n");
//or operator is used to form either or condition 
//But what is num is single digit - 5 or four digit 1005
//here && operator is used to satisfy the both conditions
//As we know that number cn be greater than three digit or less than two digit
else
printf("This number is neither 'double digit' nor 'triple digit' number\n");
return 0;
}

