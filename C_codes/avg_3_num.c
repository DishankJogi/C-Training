//C Program to find the average of three numbers
#include<stdio.h>

int main()
{
	// Declares Variables
	int a,b,c,Avg;
 
	// Input three numbers
	printf("Enter the value of A = ");
	scanf("%d",&a);

	printf("Enter the value of B = ");
	scanf("%d",&b);

	printf("Enter the value of C = ");
	scanf("%d",&c);

	// Calculate the average
	Avg= a + b + c;
	Avg=Avg/3;

	// Display the result
	printf("Average is %d ", Avg);

	return 0;
}