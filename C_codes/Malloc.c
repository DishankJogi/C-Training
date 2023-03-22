// C program to demonstrates dynamic memory allocation using malloc() and realloc() functions.
#include<stdio.h>//Preprocessor Directives
#include<stdlib.h>// calloc,malloc,realloc include in this library. 

int main()
{	
	int num,a;	
	int *a_pointer;
	
	// Allocate memory for 5 integers
	a_pointer = (int*)malloc(5*sizeof(int));

	// Take input of 5 integers from the user and store them in the allocated memory
	for(int i=0;i<5;i++)
	{
		printf("Enter the %d element of array:",i);
		scanf("%d",&a_pointer[i]);
	}

	// Print the 5 integers stored in the allocated memory
	for(int i=0;i<5;i++)
	{
		printf("%d element of array is %d \n",i,a_pointer[i]);
	}

	// Take input for the new size of the array and reallocate memory accordingly
	printf("Enter the new size of array:");
	scanf("%d",&num);

	a_pointer = (int*)realloc(a_pointer,num*sizeof(int));

	// Take input of the new elements from the user and store them in the reallocated memory
	for(int i=0;i<num;i++)
	{
		printf("Enter the %d new element :",i);
		scanf("%d",&a_pointer[i]);
	}

	// Print the new elements stored in the reallocated memory
	for(int i=0;i<num;i++)
	{
		printf("%d new element is %d \n",i,a_pointer[i]);
	}

	// Free the allocated memory to prevent memory leaks
	free(a_pointer);

return 0;

}