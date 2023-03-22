 //C program takes an integer input from the user, passes it to the 'square' function and calculates the square of the number.
#include<stdio.h>

int square(int); // Function declaration

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	square(num); // Function calling with argument
	return 0;
}

int square(int n)
{
	n = n * n; // Calculate the square of the number passed as argument
	printf("Square is: %d", n);
}