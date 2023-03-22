//C program for the dangling pointer 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	//case 1:
	int *ptr = (int*)malloc(5*sizeof(int)); // Allocate memory for an integer array of size 5 using malloc()
	ptr[1] = 23;                            // Initialize elements of the array
	ptr[2] = 13;
	ptr[3] = 43;
	ptr[4] = 53;
	ptr[5] = 83;            
	free(ptr);                              // Free the dynamically allocated memory
	printf("%d\n",ptr);                     // Print the value of the pointer
}
