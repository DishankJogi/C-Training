// C program to manipulates value of inter using pointer 
#include<stdio.h> // preprocessor Directives 

int main()
{
	int z; // declare integer variable z
	int *ptr; // declare integer pointer variable ptr
	
	ptr = &z; // assign address of z to ptr
	*ptr = 0; // set the value pointed to by ptr to 0 
	
	printf("Value of Z is: %d\n",z); // print value of z
	printf("Value of ptr is: %d\n",*ptr); // print value pointed to by ptr
	
	*ptr += 7; // increment the value pointed to by ptr by 7
	
	printf("Value of z is : %d\n",z); // print value of z
	printf("Value of ptr is : %d\n",*ptr); // print value pointed to by ptr
	
	(*ptr)++; // increment the value pointed to by ptr by 1
	
	printf("Value of z is : %d\n",z); // print value of z
	printf("Value of ptr is : %d\n",*ptr); // print value pointed to by ptr
} 
