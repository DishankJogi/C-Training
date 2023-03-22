// C program to check whether number is even or odd.
#include<stdio.h>
// function to check if a number is even or odd
int even(int number)
{
	return (number % 2==0);
}

int main()
{
	int number;
	
	// take integer user input , store it to the number 
	printf("enter the number:\n");
	scanf("%d",&number);
	
	// check if the input number is even or odd using the even() function
	if (even(number))
	{
		printf("%d is Even Number",number);
	}
	else
	{
		printf("%d is Odd Number",number);
	}
	
	return 0;
}
