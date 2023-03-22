//C program to print even and odd numbers from 1-50 using for loop 
#include<stdio.h> // Preprocessive Directive 

int main()
{
	int i; // declare integer variable i
	for(i=0;i<50;i++) // loop from 0 to 49
	{
		if(i % 2 == 0)
		{ // check if i is divisible by 2
			printf("Even Number: %d \n ",i); // print i and label it as even
		}
		else
		{
			printf("Odd Number: %d \n ",i); // print i and label it as odd
		}
		
	}
	return 0;
	
}
