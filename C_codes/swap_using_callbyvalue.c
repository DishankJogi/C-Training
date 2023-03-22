// c program to swapping the value using function call by value
#include<stdio.h>// Preproccessor Directives 

void _swap(int,int);// Function Declaration

int main()
{
	int a; int b;// variable Declaration
	// Take input from the user 
	printf("enter the value of A:");
	scanf("%d",&a);
	
	printf("enter the value of B:");
	scanf("%d",&b);
	
	_swap(a,b);//calling the function 
	
	
}

void _swap(int a,int b)
{
	// swapping value Using artihmetic logic 
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d , b = %d",a,b);// Prints after swapping 
}