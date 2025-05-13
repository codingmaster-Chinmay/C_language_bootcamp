// Nested Loop:-

/*
Printing Right angled traingle:
write  a program that receives an integer n - 
The program should print a right angle traingle with the following pattern up to given n

for e.g 
If the user enters n  = 3
then it will print

1
1 2
1 2 3


*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int n;
//	int i, j;
//	
//	printf("Enter n: ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		//for(j=1;j<=n;j++)
//		for(j=1;j<=i;j++)
//			printf("%d",j);
//			printf("\n");
//	}
//	
//	return 0;
//}


/*when we have to print pattern like this we use loop inside loop - called nested loop
In this but there is problem we actually want to print a right angle traingle
but , everytime the whole loop get executed so 123 are printed everytime for main loop
so wr want 1 to printed only once , 12 for once and 123 for once

*/



//Write a program that receives an integer n and print the right angle traingle in the following pattern 
/*
1
22
333

*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i,j;
//    int n;
//    
//    printf("Enter n: ");
//    scanf("%d",&n);
//    
//    for(i=1;i<=n;i++)
//    {
//    	for(j=1;j<=i;j++)
//    	printf("%d",i);
//    	printf("\n");
//    	
//	}
//	return 0;
//}



/*here the case is we want a number that is i to be printed that many number of times of its value 
which can be done by using j value
the condition for the i is same that i will have value from 1 to 3
but j will be upto i times and i is to be printed
for e.g i = 2 then , in j loop inside , it is 1, and then 2 and then loop stops 
as value of j exceeds so , the print statement executes for 2 times and value of i = 2 gets printed


*/
// one more logic by decrement operator

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int n;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		j = i;
		while  (j>0)
		{
			printf("%d",i);
			j--;
			
		}
		printf("\n");
		
	}
	return 0;
}

