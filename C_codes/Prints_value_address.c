// C program to give user input value to array element and find address of each array element.
#include<stdio.h>// Preprocessor Directives 
int main()
{
	int i, sum=0;// Variable Declaration 
	int a1[10]; //Array Declaration 
	for(i=0;i<10;i++)// Loop Iterates 9 Times
	{
		// Take user input for the array element a[i]
		printf("Enter the array element:");
		scanf("%d",&a1[i]);
		// Prints the each array element value
		printf("The Value of %d element is = %d\n",i,a1[i]);
		// Prints the address each array element
		printf("The Address of %d element is = %d\n",a1[i],&a1[i]);
		sum = sum + a1[i];	// Computes the sum of all array elements
	}
	printf("sum of all the array elements:%d",sum);
}