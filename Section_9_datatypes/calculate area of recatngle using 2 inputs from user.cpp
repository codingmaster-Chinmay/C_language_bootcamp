//calculating birth year using 3 variables 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rec_height;
	int rec_width;
	int area;
	
	printf("Enter the height of the rectangle: ",rec_height);
	scanf("%d",&rec_height);
	printf("Enter the width of the rectangle: ",rec_width);
	scanf("%d",&rec_width);
	area=rec_height*rec_width;
	printf("The Area of rectangle is:%d",area);
	
	return 0;
}
