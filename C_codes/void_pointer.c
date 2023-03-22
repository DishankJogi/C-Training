// C program to demonstrate void Pointer 
#include<stdio.h>

int main()
{
	// Declare variables
	int a = 12;        // an integer variable
	char ch = '*';     // a character variable
	void *a_pointer;   // a pointer to void 
	
	// Set the pointer to point to the integer variable and print its value
	a_pointer = &a;
	printf("Value of Pointer is: %d\n",*((int *)a_pointer));
	
	// Set the pointer to point to the character variable and print its value
	a_pointer = &ch; 
	printf("Value of Pointer is: %c\n",*((char *)a_pointer));

	return 0;
}
