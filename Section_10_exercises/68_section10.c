#include<stdio.h>
int main(){
	// sum of arithmetic sequence 
	// Sn = (a1 + an)*n/2
    float a1,an,Sn;
    int n;
    printf("Enter the Initial Term (a1): ");
    scanf("%f",&a1);
    printf("Enter the n-th term (an): ");
    scanf("%f",&an);
    printf("Enter the number of elements in the arithmetic Sequence: ");
	scanf("%d",&n);
	//Sn represents the sum of all sequence in the series
	Sn  = (a1 + an) * n/2;
	printf("the sum of your sequence  = %f\n",Sn);
	return 0;
	  
}
