// Break and Continue statement and keywords

//break - this keyword is used to break any loop which is in its natural life cycle
// the loop can be stopped with break statement to avoid  unnecessary running of code

//E.g if print 1 to 10 nuumber by using for loop and if (i=5) then break statement and then print i 

// this code when i = 5 it breaks the loop regardless of the condition and comes out of loop


#include<stdio.h>
int main()
{
	int n;
	int i;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i = 1; i<=n; i++)
	{
		if(i=5)
			break;
	printf("%d",i);
		
			
		
		
	}
	return 0;
}
