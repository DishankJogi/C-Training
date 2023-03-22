#include <stdio.h> //Preprocessor Directives

int main()
{
	int x = 8200; // Declare and initialize an integer variable x = 8200
	int *xptr = NULL; // Declare a pointer variable xptr and initialize to NULL

	printf("The Address of : %d\n",xptr); // Print the address of the variable xptr, which NULL
	xptr = &x; // Assign the address of x to xptr
	printf("The Address of : %d\n",*xptr); // Print the value stored at the address pointed to by xptr, which is the value of x
}
