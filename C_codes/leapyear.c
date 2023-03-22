// C program to find check whether the year is leap or not? 
#include<stdio.h>

int leapyear(int);// function declaration

int main()
{	
	int year,a;// variables declaration
	// Take year input from the user 
	printf("enter the year : ");
	scanf("%d",&year);
	a = leapyear(year);// call the function 
	
	if(a == 1)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not an Leap Year");
	}
	
}

// function Definition 
int leapyear(int x)
{
	if(x%4==0) // formula to check leapyear. 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}