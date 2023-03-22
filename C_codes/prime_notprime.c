// C program to find the prime number

#include<stdio.h>

int main()
{
	//variable declaration
	int number, j , count=0 ;
	
	// Take integer input from the user 
	printf("Enter the number:");
	scanf("%d",&number);
	
	 // Loop iterates till j not becomes equal to number
    for (j = 1; j <= number; j++)
    {
        if (number % j == 0)  //checks if j is a factor of number
        {
            count++;  // increments the count 
        }
    }
    
    if (count == 2)  // This line checks if the count is equal to 2, which means that number is prime
    {
        printf("Number %d is Prime", number); // prints result
    }
    else
    {
        printf("Number %d is Not Prime", number);  // prints result
    }
    
    return 0;  
}