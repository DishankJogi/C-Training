// C program for the  memory reallocation dynamically 
#include <stdio.h>   // preprocessor directives
#include <stdlib.h>  // standard library for memory allocation.

int main()
{
    int *a_pointer;  // Declare a pointer variable.
    int num;
    
	// Take input from the user for the size array 
    printf("Enter the size of array:");
    scanf("%d", &num); 
    
    a_pointer = (int*)calloc(num, sizeof(int));  // Allocate memory for the array using calloc function.
    
    for (int i = 0; i < num; i++)  // Loop to read values into the array.
    {
		// Take user input for the value of array elements 
        printf("Enter the %d element of array:", i);
        scanf("%d", &a_pointer[i]); 
    }
    
    for (int i = 0; i < num; i++)  // Loop to print the values in the array.
    {
        printf("%d element of array is : %d\n", i, a_pointer[i]);
    }
    
	// Take input from the user for the new size of array 
    printf("Enter the size of new array :");
    scanf("%d", &num); 
    
    a_pointer = (int*)realloc(a_pointer, num * sizeof(int));  // Reallocate memory for the array using realloc function.
    
    for (int i = 0; i < num; i++)  // Loop to read values into the new array.
    {
		// Take user input for the value of array elements 
        printf("Enter the %d new element is:", i);
        scanf("%d", &a_pointer[i]);  
    }
    
    for (int i = 0; i < num; i++)  // Loop to print the values in the new array.
    {
        printf("%d new element of array is:%d\n", i, a_pointer[i]);
    }
    
    free(a_pointer);  // Free the memory allocated for the array.
    return 0;
}
