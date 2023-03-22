// C program to print the multiplication table of given user input number 
#include<stdio.h>// preprocessor directives 

int main()
{
	// variable declaration 
	int number,i;
	// take integer input from the user  
	printf("Enter the Number of Multiplication Table \n",number);
	scanf("%d",&number);
	
	printf("Below given Multiplication table of%d: \n",number);

	// Print without using for loop
	// printf("%d X 1 = %d \n",number,1 * number);
	// printf("%d X 2 = %d \n",number,2 * number);
	// printf("%d X 3 = %d \n",number,3 * number);
	// printf("%d X 4 = %d \n",number,4 * number);
	// printf("%d X 5 = %d \n",number,5 * number);
	// printf("%d X 6 = %d \n",number,6 * number);
	// printf("%d X 7 = %d \n",number,7 * number);
	// printf("%d X 8 = %d \n",number,8 * number);
	// printf("%d X 9 = %d \n",number,9 * number);
	// printf("%d X 10 = %d \n",number,10* number);
	
	// loop iterates till the i not becomes 10
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d \n",number,i,i * number);// prints result 
	}
	return 0;
	
	
}