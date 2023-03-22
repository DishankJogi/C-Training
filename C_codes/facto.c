// C program to find Factorial of user input number 
#include<stdio.h>

int main()
{
	// Variables Declartion 
	int num,n;
	long fact=1;
	
	printf("Enter the Number:");
	scanf("%d",&n);// Take input from the user and store it to the n variable 
	
	num = n;
	if(n<0)// check the given number is valid or not 
	{
		printf("Not get factorial of Nagative Number");
	}
	else
	{
		while(n > 1)// loop executes n is grater than 1
		{
		fact*= n;// multiply fact in to n and store into the fact
		n --;// decrease n by 1
		}
	printf("Factorial of %d is %ld ",num, fact);// prints result 
	}
	return 0;
}