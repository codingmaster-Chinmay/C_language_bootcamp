// This code is by using Normal while loop 
/*Here normal while loop is given where the loop is first checked and then statements are executed */


//#include<stdio.h>
//int main()
//{
//	int price,totalPrice = 0;
//	printf("enter the price: ");
//	scanf("%d",&price);
//	while(price!=0);
//	{
//		totalPrice = totalPrice + price;
//		printf("Enter the price: ");
//		scanf("%d",&price);
//		
//	}
//	printf("Total order price = %d\n",&totalPrice);
//	return 0;
//}


// same program by using do while loop :-


#include<stdio.h>
int main()
{
	int price, totalPrice= 0;
	do{
		printf("Enter the price: ");
		scanf("%d",&price);
		totalPrice = totalPrice + price;
		
	}while(price!=0);
	printf("Total order price = %d",totalPrice);
	return 0;
	
}

//This program is written by using do while loop in which do consists of while body statments 
//In this first do statments are executed regardless of while condition and then the while condition is checked 
// Unless the  while loop gets false it doesnot show the final output in  this code


