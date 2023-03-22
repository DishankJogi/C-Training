// C program to find factorial of user input number
#include<stdio.h>

void facto(int,int); // function Declaration

int main()
{
	int f,number;
	f=1;// Initialize variable f to 1
	printf("Enter a Number to Find Factorial: ");
    scanf("%d",&number);// take input from the user and store it 
	
	facto(f,number); // call the function 
	return 0;
}

void facto(int x ,int y)//function definition 
{
	int fact =1;// Initialize variable fact to 1
	while(x<=y)//Loop until x becomes greater than y
	{
		fact = fact*x; // Multiply fact by x and assign the result to fact
		x++;//Increment x by 1
	}
	printf("The factorial of %d is : %d",y,fact);// printing the result 
}