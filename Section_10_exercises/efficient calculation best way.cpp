#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//we know that when bases are same there is addition of the powers
	//X^2=x*x;
	//X^4=X^2*X^2;
	//X^6=X^4*X^2;
	//X^8=X^4*X^4;
	int x;
	int x2,x4,x6,x8;
	printf("Enter value of x: ");
	scanf("%d",&x);
	
	x2=x*x;
	x4=x2*x2;
	x6=x4*x2;
	x8=x4*x4;
	printf("X^2=%d \nX^4=%d \nX^6=%d \nX^8=%d \n",x2,x4,x6,x8);
	return 0;
	
}
