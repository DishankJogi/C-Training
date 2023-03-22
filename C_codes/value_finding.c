// C program to find the integer value from the given array 
#include<stdio.h>

int main()
{
    // Declare variables and array 
    int i, value, a1[5];
    
    printf("Enter the value : ");
    scanf("%d",&value);// Take value from the user 

    // Use a for loop to take input from the user
    for(i=0;i<5;i++)
    {
		// take array element from user 
		printf("Enter the value of array element:");
        scanf("%d",&a1[i]);
        
        // Check if the entered value matches the user-provided value
        if(value == a1[i])
        {
            // If a match is found, print a message and break out of the loop
            printf("Value has been found\n");
            break;
        }
        else 
        {
            // If no match is found, continue iterating through the loop
            continue;
        }
    }

    // If the loop completes without finding a match, print a message indicating the value was not found
    if(i == 5)
    {
        printf("Value not found");
    }
    return 0;
}
