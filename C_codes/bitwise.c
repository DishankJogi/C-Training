// C program for Bitwise Operation 
#include<stdio.h>

int main()
{
	//Declares The Variables
	int a = 35,b=45,c,d,e;
	
	// Bitwise And of Variable A,B
	c = a & b;// Store Result in c
	printf("a & b = %d\n",c);// Display the Result 
	
	// Bitwise Or of Variable A,B
	d = a | b;// Store Result in d
	printf("a | b = %d\n",d);// Display the Result 
	
	//Bitwise Ex-Or of Variable A,B
	e = a ^ b;// Store Result in e
	printf("a ^ b = %d\n",e);// Display the Result   
	
}