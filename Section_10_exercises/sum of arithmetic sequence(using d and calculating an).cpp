#include<stdio.h>
#include<stdlib.h>
int main()
{
	//calculate the sum of the sequence;
	//a1,d,an,n,and Sn,;//here last term of the sequence of the must be present;
	//sum=Sn=(a1+an)*n/2;
	float a1,d;
	int n;
	float An;
	float Sn;
	printf("Enter the Initial term(a1): ");
	scanf("%f",&a1);
	printf("Enter the difference in the arithmetic sequence: ");
	scanf("%f",&d);
	printf("Enter the number of the elements in arithmetic sequence: ");
	scanf("%d",&n);
	An=a1+(n-1)*d;
	printf("\nThe n-th term of the arithmetic sequence is:%.2f",An);
	Sn=(a1+An)*n/2;
	printf("\nThe sum of the n terms of arithmtic sequence is:%.2f",Sn);
	return 0;
}
