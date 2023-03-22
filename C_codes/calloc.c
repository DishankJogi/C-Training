// C program to allocate memory dynamicall using calloc function
#include<stdio.h>// Preprocessor Directives
#include<stdlib.h>

int main()
{
	// Declaration of Variables
	int num;
	printf("Enter the size of number: ");
	scanf("%d",&num);// Take input from the User 
	int *c_pointer;
	c_pointer = (int*)calloc(num,sizeof(int*)); // allocating memory dynamically using calloc


	// Code to display array elements
	for(int i=0;i<num;i++)
	{
		printf("%d element of array is : %d \n",i,c_pointer[i]);
	}

	return 0;

}