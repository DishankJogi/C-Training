// c program to sum of n naturals number
#include<stdio.h>
int sum(int);// Function Declaration 

int main()
{
	printf("sum is %d",sum(5));//display result and calling the function with argument is 5
	return 0;
}

//recursive function definition
int sum(int n)
{
	if(n==1)// check if n is equal to 1 ? 
	{
		return 1;
	}
	// computes the sum of n number 
	int sumN1=sum(n-1);
	int sumN = sumN1+n;
	return sumN;
}


// c program to find factroial of numbers 
#include<stdio.h>
int fact(int);// fucntion declaration 

int main()
{
	
	printf("factorial of is  %d",fact(5));// display result and calling the function with argument is 5
	return 0;
	
}

int fact(int n)// fucntion definition 
{
	if (n==0)// check n is equal to 0
	{
		return 1;
	}
	// computes the factorial 
	int factnM1=fact(n-1); 
	int factN = factnM1 * n;
	return factN;
}