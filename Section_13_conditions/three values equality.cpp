#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first value a: ");
	scanf("%d",&a);
	printf("Enter the second value b: ");
	scanf("%d",&b);
	printf("Enter the third value c: ");
	scanf("%d",&c);
	if(a == b && b==c)
	printf("EQUAL");
	else
	printf("NOT EQUAL");
	
	 return 0;
}
