#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int temp;//using third variable temp 
	printf("before swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	//just to check the values of a and b before swapping;
	temp=a; //value of a gets stored in temp;
	a=b;//value of b gets swapped by a and stored in a;
	b=temp;//vale of temp gets transfered to b as b is empty;
	printf("after swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	return 0;
	
}
