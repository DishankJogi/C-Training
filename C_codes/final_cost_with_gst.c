// C program to find gst on price using array
#include<stdio.h>// Preprocessive Directives 
int main()
{
	float price[3];// Declare array with 3 floating point number to store 
	
	// read the prices from the user and store them it 
	printf("Enter the Price1 is :");
	scanf("%f",&price[0]);
	
	
	printf("Enter the Price2 is :");
	scanf("%f",&price[1]);
	
	
	printf("Enter the Price3 is :");
	scanf("%f",&price[2]);
	
	 // Calculate and print the final cost with GST for each price
	printf("Final Cost_1 with Gst is : %f\n",price[0]+(0.18 * price[0]));
	printf("Final Cost_2 with Gst is : %f\n",price[1]+(0.18 * price[1]));
	printf("Final Cost_3 with Gst is : %f\n",price[2]+(0.18 * price[2]));
}