//C Program to find the average of three numbers
#include<stdio.h>// Preprocessor Directives

int main(){
	// Declares Variables 
	int a=1,n,sum=0,avg;
	printf("Enter ten positive number:\n");
	
	while(a<=10)// execute the loop for 10 times
	{
		//Take Input From the user and Store it into N Variables
		printf("Enter the Number: %d ",a);
		scanf("%d",&n);
		
		sum = sum + n;// add the entered number to the sum
		a++;// increment the counter by 1
		
		// check if the entered number is negative
		if(n<0)
		{
			printf("Enter Only Postive Numbers");// Display the Message 
		}
	
	}
	// calculate the average of the entered numbers
	avg = sum / 10;
	printf("Average of ten number is %d",avg);//Display the average of 10 Numbers
	return 0;
}
