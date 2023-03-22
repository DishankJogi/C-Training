// C program convert a Fahrenheit to Celsius and Celsius to Fahrenheit conversion.
#include<stdio.h>

int main()
{
	// Declares variables
	int fahrenhit; 
	float celsius;
	// // Coversion of F ----> C 
	// printf("Enter the Fahrenhit Value:");
	// scanf("%d",&fahrenhit);// take input from user store it to fahrenhit
	// celsius = (fahrenhit-32) / 1.8;//computes fahrenhit to celsius formula
	// printf("Conversion in celsius = %f",celsius);Prints result 
	
	
	// Conversion of C ----> F
	printf("Enter the celsius Value:");
	scanf("%f",&celsius);// take input from user store it to celcius
	fahrenhit= (celsius*1.8)+32;//computes celcius to fahrenhit formula
	printf("Conversion in fahrenhit = %d",fahrenhit);// Print Results
	
	return 0;
	
	
}