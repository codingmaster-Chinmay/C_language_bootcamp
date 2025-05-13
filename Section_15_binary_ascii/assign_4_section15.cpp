//#include<stdio.h>
//int main()
//{
//	printf("%x", 65); // %x is format specifier for the lower case hexadecimal format
//	// 41 is representation for hexadecimal for decimal value of 65
//    return 0;
//}


//
//#include<stdio.h>
//int main(){
//	
//	printf("%x",123);
//	return 0;
//	//the result is 7b 
//}

/*What is the expected result of the following code execution?*/

//#include<stdio.h>
//int main()
//{
//	printf("%d",0x1A2);
//	return 0;
//}
////the result for the above is 418 
////format specifier  %d is used to get the value of decimal from hexadecimal



/*Write a program that reads from the user 1 character representing a "1-digit" value in Hexadecimal Format. The program should print the corresponding BINARY representation of the input.

*/

#include<stdio.h>

	//Hex value (1 digit )--> Binary representation
	
int main()
{
	char hexChar;
	printf("Enter a hexadecimal value(one digit): ");
	scanf("%c",&hexChar);
	switch(hexChar)
	{
		case '0':
			printf("0000");
			break;
		case '1':
			printf("0001");
			break;
		case '2':
			printf("0010");
			break;
		case '3':
			printf("0011");
			break;
		case '4':
			printf("0100");
			break;
		case '5':
			printf("0101");
			break;
		case '6':
			printf("0110");
			break;
		case '7':
			printf("0111");
			break;
		case '8':
			printf("1000");
			break;
		case '9':
			printf("1001");
			break;
		case 'A':
			printf("1010");
			break;	
		case 'B':
			printf("1011");
			break;		
		case 'C':
			printf("1100");
			break;		
		case 'D':
			printf("1101");
			break;		
		case 'E':
			printf("1110");
			break;		
		case 'F':
			printf("1111");
			break;		
		default:
			printf("Seems you inserted something not as expected: ");
			
			
													
		}
		return 0;	
}
