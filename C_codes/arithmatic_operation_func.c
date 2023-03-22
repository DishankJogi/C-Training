//Write a C program to add, multiply, division and subtraction using functions

// Addition Using Function 
#include<stdio.h>
int sum(int a , int b)//function to Addition two numbers
{
	return a + b;
}
int main()
{
	int a, b ,c ;
	
	printf("Value of  A =",a);
	scanf("%d",&a);
	
	printf("Value of  B =",b);
	scanf("%d",&b);
	
	c = sum(a,b);//call the sum function to subtract two numbers and store the result in c
	printf("Sum Of A and B =%d",c);// display the result to the user
	
	return 0;
}

//Subtraction Using Function
#include<stdio.h>
int sub(int a,int b)//function to Subtract two numbers
{	
	return a - b;
}
int main(){
	int a,b,c;
	
	printf("Value of A =",a);
	scanf("%d",&a);
	
	printf("Value of B=",b);
	scanf("%d",&b);
	
	c=sub(a,b);//call the sub function to subtract two numbers and store the result in c
	printf("Subtraction of A and B = %d",c);// display the result to the user
	
	return 0;
}

// Multiplication Using Function 
#include<stdio.h>
int mul(int a,int b)//function to Multiply two numbers
{
	return a * b;
}

int main(){
	
	int a,b,c;
	printf("Enter the value of A: ",a);
	scanf("%d",&a);
	
	printf("Enter the value of B: ",b);
	scanf("%d",&b);
	
	c=mul(a,b);//call the mul function to multiply two numbers and store the result in c
	printf("Multiplication of A and B = %d",c);// display the result to the user
}

// Division Using Function 

#include<stdio.h>

int div(int a,int b)// function to divide two numbers
{ 
	return a / b;
}

int main()
{
	int a,b;
	float c;
	printf("Enter the value of A: ",a);
	scanf("%d",&a);

	printf("Enter the value of B: ",b);
	scanf("%d",&b);

	c=div(a,b); // call the div function to divide two numbers and store the result in c
	printf("Division of A and B = %f",c); // display the result to the user
}	
	
	