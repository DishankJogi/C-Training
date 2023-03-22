//C program to print even and odd numbers from 1-50 using while

#include<stdio.h>// Preprocessor Directives 

int main()
{
	int i; // declaration of i variable
	
	while(i<50) //i iterate 49 time throufgh while loop
	{
		printf("%d \n",i);// Prints the i
		i=i+1;// increment counter
		
		if(i % 2 == 0)// check the even 
		{
			printf("Even Number :",i);
		}
		else// check the odd 
		{
			printf("Odd Number :",i);
		}	
	}
	return 0;
}