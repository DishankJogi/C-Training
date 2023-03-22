// C Program to additon of two user input Number.
#include<stdio.h>// Preprocessor Directive

int addition(int num1,int num2); // Function declaration 

int main()
{
	// Declare variables
	int num1,num2,c;
	
	// Prompt user to enter num1
	printf("Enter the value of Num1 :\n");
	scanf("%d",&num1);
	
	// Prompt user to enter num2
	printf("Enter the value of Num2 :\n");
	scanf("%d",&num2);
	
	// Call the addition() function and store the result in c
	c = addition(num1,num2);
	
	// Print the result
	printf("Result=%d", c);
}

// Function to add two numbers
int addition(int a , int b)
{
	return a+b; // Return the sum of a and b
}

