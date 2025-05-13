//format specification 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//exmaples 
	// here two %d are used and the numbers successively following the sequence of the string
	printf("Today I am %d years old and next year I am going to be %d years old\n",20,21);
	
	//printf("My average grade: %d\n",93.7); this will give an error because the data to be printed is a decimal no 
	//for that we must use %f and also we can decide the decimal after point we want by giving it before .1%f


    printf("My average grade: %f\n",93.7);	
    
    printf("My average grade: %.1f\n",93.7);
    printf("My average grade: %.2f\n",65.437);
	return 0;
}
