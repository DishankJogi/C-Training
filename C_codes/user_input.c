// C program to make user input array 
#include<stdio.h>
int main()
{
	// Declare array of size 4
	int array1[4];
	
	// Declare variable
	int i;
	
	// Use a for loop to take input from the user for each element of the array
	for(i=0;i<4;i++)
	{
		printf("Enter the value of array element= array[%d] : ",i);
		
		// take user input and store it in the corresponding array element
		scanf("%d",&array1[i]);
	}
	
	printf("Print the array elements :\n");
	for(i=0;i<4;i++)// Displaying the array elements
	{
		// display the value of each array element
		printf("%d\t",array1[i]);
	}
	return 0;
}
