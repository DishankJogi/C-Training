// c program to swapping the value using function call by reference 

#include<stdio.h>// Preproccessor Directives 
void _swap(int *x,int *y);// function declaration 

int main()
{
	//declare two integer variables
	int a; int b;
	// take integer input from the user
	printf("enter the value of A:");
	scanf("%d",&a);
	
	printf("enter the value of B:");
	scanf("%d",&b);
	
	_swap(&a,&b);// calling the function 
	printf("a = %d , b = %d",a,b);
	
}
// function definition
void _swap(int *x,int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}