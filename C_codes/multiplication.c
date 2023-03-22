// C program to multiplication of global variables and local varibales using function 
#include <stdio.h>

int c =7,d =7,e=7; // global variables c, d, and e with values 7
int mul(int g) // function that takes an integer argument g and returns the product of c, d, e, and g
{
	return c*d*e*g; // return the multiplication of c, d, e, and g
}

void main()
{
	float f;
	float g =7.23; // local variable g with value 7.23
	f = mul(g); // call the mul() function with arguments g 
	printf("Answer is %f",f); // print the result stored in f
}
