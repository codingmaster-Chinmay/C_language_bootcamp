#include<stdio.h>
#include<stdlib.h>
int main()
{ 
	int totalseconds;
	int hours,minutes,remainingseconds;
	printf("Enter the total seconds(that you want to convert): ");
	scanf("%d",&totalseconds);
	/*here hours into seconds are total seconds of hours subtracted from
	total seconds and then divided by 60 to convert into minutes*/
	hours = totalseconds / 3600;
	minutes = (totalseconds - hours * 3600) / 60;
	remainingseconds = (totalseconds - hours * 3600) % 60;
	
	printf("total hours are:%d\n", hours);
	printf("total minutes are:%d\n", minutes);
	printf("total remaining seconds are:%d\n",remainingseconds);
	return 0;
}
