// C program to  find the cube of user input number.
#include<stdio.h> // Preprocessor Directives

int main()
{
	//Variable Declartion 
	int a,cube;
	printf("Enter the number:");
	scanf("%d",&a);// Store the user input number 
	
	cube=a*a*a;// computes the cube 
	printf("Cube is %d \n ",cube);
	
	return 0;
}