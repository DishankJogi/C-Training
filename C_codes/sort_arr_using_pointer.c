//  C program to sorting the array using fucntion pointer 
#include<stdio.h>

// Function declaration
void a1sort(int, int*);

int main()
{
	// Declare variables
	int i, size;
	
	// Take input from the user for the array size 
	printf("Enter the Size of Array: ");
	scanf("%d", &size);
	
	// Declare and initialize an array by given size
	int a1[size];
	
	for(i = 0; i < size; i++)
	{
		// Enter the value of array element 
		printf("Enter the Array[%d] element :", i);
		scanf("%d", &a1[i]);
	}
	a1sort(size, a1); // function calling 
}

// Function Definition 
void a1sort(int size, int *ptr)
{
	// Declare loop variables
	int i, j, x;
	
	// Bubble sort algorithm to sort the array in ascending order
	for(i = 0; i < size; i++) 
	{ 
        for(j = i + 1; j < size; j++) 
		{ 
            if (*(ptr + j) < *(ptr + i)) 
			{ 
                x = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = x; 
            } 
        } 
    } 
	
	// Display the sorted array
	for(i = 0; i < size; i++)
	{
        printf("Sorting the Array : %d\n ", *(ptr + i)); 
	} 
}
