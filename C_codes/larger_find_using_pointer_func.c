// C program to find the larger number among two using function pointer 
#include<stdio.h>

int* larger(int* , int*);// function declaration 

int* main()
{	
	int a,b;// Declares variable
	// Take integer user input from the user for a and b
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	int *p;// integer pointer declartion 
	p = larger(&a,&b);// call the function 
	printf("%d Is Larger",*p);// prints result 
	
}
// Function Definition 
int* larger(int *x , int *y)
{
	if(*x > *y)
	{
		return x;
	}
	else
	{
		return y;
	}
}