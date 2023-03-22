// C program to demonstrate static storage class 
#include<stdio.h>

// Function Definition
int function(void)
{
	static int count = 0; // Static variable to store the counter value
	count++; // Increment the counter
	return count;
}

// Function Definition
int function2(void)
{
	int count1 = 0; // Normal variable to store the counter value
	count1++; // Increment the counter
	return count1;
}

int main(void)
{
	// Calling the first function twice and printing the returned values
	printf("The value of Static Variable is : %d\n",function());
	printf("The value of Static Variable is : %d\n",function());
	
	// Calling the second function twice and printing the returned values
	printf("The value of Normal Variable is : %d\n",function2());
	printf("The value of Normal Variable is : %d\n",function2());
}
