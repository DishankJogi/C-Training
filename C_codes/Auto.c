 // C program demonstrates the use of the auto keyword to define variables with block scope.
#include<stdio.h>// Preprocessor Directives

int main()
{
	int a =20;
{
	auto int a = 24; // 'a' defined within this block with value 24

{
	auto int a= 28; // 'a' defined within this block with value 28
	printf("%d\n",a); // prints 28
	printf("%d\n",&a); // prints the address of 'a' within this block
}

	printf("%d\n",a); // prints 24, as this 'a' is defined within the outer block
	printf("%d\n",&a); // prints the address of 'a' within the outer block
}

	printf("%d\n",a); // prints 20, as this 'a' is defined outside all the blocks
	printf("%d\n",&a); // prints the address of the 'a' defined outside all the blocks
}