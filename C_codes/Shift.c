// C program to demostrate shift operator
#include<stdio.h>

int main()
{
	// Declares integer variables with value
	int a = 25; 
	int b = 38;
	
	// apply Shift Operation on varibales 
	a = a << 1;
	b = b >> 2;
	
	// Prints the result 
	printf("Shift Left : %d \n",a);
	printf("Shift Right: %d \n",b);
}