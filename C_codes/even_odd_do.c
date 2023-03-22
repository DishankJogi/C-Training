// C program to print even and odd numbers from 1-50 using Do while
#include<stdio.h>

int main()
{
	int num, index=0;          // Declare variables to hold user input and counter
	printf("Enter the value of: "); // Prompt the user to enter a value
	scanf("%d",&num);              // Read in the user input
	
	do                          // Start a do-while loop
	{
		index++;                 // Increment the counter
		if(index % 2 ==0){     // Check if the number is even
			printf(" Even Number : %d \n ",index); // Print even numbers
		}
		else
		{
			printf(" Odd Number : %d \n",index);  // Print odd numbers
		}
	}
	while(index < num);        // Continue the loop until the counter reaches the input value
	return 0;                   // Return success status
}
