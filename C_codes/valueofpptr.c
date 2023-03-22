// C program to display the value of pointer and dereference pointer 
#include<stdio.h>// Preprocessor Directives 
int main()
{
	// Declare variables
	char ch = 'D';   // a character variable
	char *ptr = &ch; // a pointer to a character variable
	char **pptr = &ptr; // a pointer to a pointer to a character variable
	
	// Print the value of ch using its variable name
	printf("Value of ch is: %c\n",ch);
	
	// Print the value of ch using its pointer
	printf("Value of ptr is: %c\n",*ptr);
	
	// Print the value of ch using the double pointer
	printf("Value of pptr is: %c\n",*pptr);
	
	// Print the value of ch using the double pointer and its dereference operator twice
	printf("Value of pptr is: %c\n",**pptr);
	return 0;
}
