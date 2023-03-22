//C program to print the fibonacci series 1 1 2 3 5 8 13 21

#include<stdio.h>// Preprocessor Directives 

int main()
{
	// variables declartion 
	int num,a=0, b=1,c,i;
	
	printf("Enter the number=");
	scanf("%d",&num);// take input from the user and store into num 
	
	for(i=1; i<=num ;i++)// loop itreate till the  i equal to num 
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}