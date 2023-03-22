// C program to find difference between ineger pointer and array pointer.
#include<stdio.h>
int main()
{
	int *p;         // Declare an integer pointer variable
	int (*ptr)[5];  // Declare a pointer to an integer array of size 5
	int arr[5];     // Declare an integer array of size 5
	
	p   = arr;      // Point the integer pointer to the first element of the integer array
	ptr = &arr;     // Point the integer array pointer to the entire integer array
	
	printf("p = %u, ptr = %u\n",p,ptr); // Print the addresses pointed by the pointers
	p++;            // Increment the integer pointer to point to the next element
	ptr++;          // Increment the integer array pointer to point to the next array
	printf("p = %u, ptr = %u\n",p,ptr); // Print the addresses pointed by the pointers
}
