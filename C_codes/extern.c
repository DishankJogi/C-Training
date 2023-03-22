#include<stdio.h> // Preprocessor Directives
#include"extern.h" // include header file containing external variable declaration

int main()
{
	extern int a; // declare that a is an external variable
	// This means that the variable is defined in another file, and we are using it in this file

	printf("%d",a); // print the value of variable a
	// The value of a is taken from the definition in the file where it is defined
	return 0;
}
