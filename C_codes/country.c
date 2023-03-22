// C program print the Greeting on the country using function.
#include<stdio.h>
//function Declartion
void namaste();
void bonjour();

int main()
{
	char country;
	printf("Enter Your Country :");
	scanf("%c",&country);
	
	if(country == 'i')
	{
		namaste();//function call
	}
	else
	{
		bonjour();// function call
	}
	return 0;
}

//function definition
void namaste()
{
	printf("Namaste\n");
}

void bonjour()
{
	printf("Bonjour\n");
}