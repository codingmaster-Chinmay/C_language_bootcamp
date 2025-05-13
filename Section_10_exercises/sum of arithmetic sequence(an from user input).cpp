#include<stdio.h>
#include<stdlib.h>
int main()
{
	//calculating Sn using initial and last term from user input
	//here there is no taking of difference 
	float a1,An,Sn;
	int n;
	printf("Enter the Initial term(a1): ");
	scanf("%f",&a1);
	printf("Enter the n-th term(An): ");
	scanf("%f",&An);
	printf("Enter the number of elements in the arithmetic sequence: ");
	scanf("%d",&n);
	
	Sn=(a1+An)*n/2;
	printf("The sum of your sequence = %.2f\n",Sn);
	
	 return 0;
	   
	
	
}
