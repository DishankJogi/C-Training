// C program performs simple arithmetic operations (+,-,*,/) using functions.
#include<stdio.h>

// Function Declaration
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{
	// Variable Declaration
	int a,b,s;
	char op;
	// Taking input from user
	printf("Make Your Choice: + , - , * , / = \n");
	scanf("%c",&op);

	printf("Enter the Value of a :\n ");
	scanf("%d",&a);
	
	printf("Enter the Value of b :\n ");
	scanf("%d",&b);

	// Performing operation according to user's choice
	if(op == '+')
	{
		s=sum(a,b); // Calling sum function
		printf("a + b = %d",s);
	}
	else if(op == '-')
	{
		s=sub(a,b);// Calling sub function
		printf("a - b = %d",s);
	}
	if(op == '*')
	{
		s=mul(a,b);// Calling mul function
		printf("a * b = %d",s);
	}
	if(op == '/')
	{
		s=div(a,b);// Calling div function
		printf("a / b = %d",s);
	}

	return 0;
}

// Function Definition
int sum(int x , int y)
{
	return x+y;
}

// Function Definition
int sub(int x , int y)
{
	return x - y;
}

// Function Definition
int mul(int x , int y)
{
	return x * y;
}

// Function Definition
int div(int x , int y)
{
	return x / y;
}