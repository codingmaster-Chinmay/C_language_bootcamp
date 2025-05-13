//Program for loops:-

/*
million dollars question 

would you rather have 1 million dollars at the moment or or 1 cent daily for 1 month and will double 
every day 
for this we need comparion of 1 million and the sum of 30  days cents challenge addition and then 
proving wrong


*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i;
	int quick_sum = 1000000;
	float total_amount = 0.01;
	//Day 1 the balance bol 0.01 cent at this moment
	
	for(i=1;i<=30;i++)
	{
		printf("Day %d: Amount % .2f\n",i,total_amount);
		total_amount = total_amount * 2;
		
	}
	
	printf("total amount after 30 days is: %f",total_amount);
	
	return 0;
}
