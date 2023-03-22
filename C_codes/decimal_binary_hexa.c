// Conversion of Decimal to Octal and Hexa Decimal 
#include<stdio.h>

int main()
{
	int a;                      // Declare an integer variable to hold user input
	printf("Enter the value="); // Prompt the user to enter a value
	scanf("%d",&a);             // Read in the user input
	printf("Octal Value of %d = %o \n",a,a); // Convert the integer to octal and print it
	printf("Hexa Decimal Value of %d = %x \n",a,a); // Convert the integer to hexadecimal and print it
} 
