#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a1,d;
	int n;
	printf("Enter the Initial Term(a1): ");
	scanf("%f",&a1);
	printf("Enter the Difference in the Arithmetic sequence: ");
	scanf("%f",&d);
	printf("Enter the number of elements in the Arithmetic sequence: ");
	scanf("%d",&n);
	printf("The n-th term of the Arithmetic sequence=%.2f\n",a1+(n-1)*d);
	
	return 0;
}
