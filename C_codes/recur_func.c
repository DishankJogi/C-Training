// C program for recursion Function 
#include<stdio.h>

int Printhelow(int); // Function declaration

int main()
{
	Printhelow(5); // Calling Function 
	return 0;
}

// recursive Function Definition 
int Printhelow(int count)
{
	if(count==0)// Check count is equal to zero?
	{
		return 0;
	}
	printf("Hellow\n");// Prints Results 
	Printhelow(count-1);// Recursive Function Call 
}