// C program demonstrate the usage of logical operators
#include<stdio.h>

int main()
{
	// declares variables 
	unsigned x= 0x10, y=0x15 , d;
	int a=1,b=0,c,e;
	
	// Evaluate logical expressions
	c = a || b; // OR operator
	d = x && y; // AND operator
	e = x ^ y; // Exclusive Or Operator 

	// Print the results
	printf("X & Y = %x\n", d); // Output is hexadecimal
	printf("a && b = %d\n", c); // Output is decimal
	printf("x ^ y = %d\n", e); // Output is decimal
	
	return 0;	

}