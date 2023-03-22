#include<stdio.h>// preprocessor directives 
#include<stdlib.h>//include malloc realloc and calloc in this library 

void main()
{
	int *fp;
	fp  = (int *)malloc(sizeof(int)); // allocate memory for an integer using malloc()
	*fp = 25; // assign a value to the allocated memory
	printf("%d",*fp); // print the value stored in the allocated memory
	free(fp); // free the allocated memory 
}
