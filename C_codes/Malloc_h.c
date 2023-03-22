#include<stdio.h> //preprocessor Directives 
#include<stdlib.h> // calloc,malloc,realloc include in this library. 

int main()
{
	// Dynamic allocation of memory using malloc()
	int* ptr;
	ptr = (int*)malloc(10*sizeof(int));
	
	// Reading input from user and storing in the allocated memory
	for(int i = 0;i < 4;i++)
	{
		printf("Enter the %d element of array:",i);
		scanf("%d",&ptr[i]);
	}
	
	// Printing the values stored in the allocated memory
	for(int i = 0;i < 4;i++)
	{
		printf("%d element of array is :%d \n",i,ptr[i]);
	}
	
	// Freeing the allocated memory
	free(ptr);
	return 0;
}
