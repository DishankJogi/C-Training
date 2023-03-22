// C program to find duplicate eliment in the array
#include <stdio.h>

int main()
{
    int i, j, size, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);

    // Declare an array of given size
    int arr1[size];

    // User Input 
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);	
    }

    // Check for duplicate elements
    printf("Duplicate Elements are = ");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // If a duplicate element is found
            if(arr1[i] == arr1[j])
            {
                count++; // Increase the count of duplicate elements
                printf("%d \t",arr1[j]); // Print the duplicate element
                break; // Break the inner loop as soon as a duplicate element is found
            }
        }
    }

    printf("\nTotal of Duplicate elements in array is = %d", count);// Printing count of duplicate number 
}
