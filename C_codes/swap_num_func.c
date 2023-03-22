//C program to swap two numbers entered by user without third variable in a swap() function Using call by value

#include <stdio.h>// Preprocessive Directives   
//Function Definition 
void swap (int a, int b)
{   
    a =  a+b; // addition of a and b and store into a; 
    b =  a-b; // subtraction of updated value of a and b and store into b; 
    a =  a-b;  // // subtraction of updated value of a and updated value b and store into a; 
    // prints the data after swapping 
	printf("Swaping Output is a = %d, b = %d\n",a,b);
}  

int main()  
{  
    int x,y;  
	// take integer input from the user  
	printf("Enter The Value of x:",x);
	scanf("%d",&x);
	printf("Enter The Value of y:",y);
	scanf("%d",&y);
	// prints the data before swapping 
    printf("Original Value x = %d, y = %d\n",x,y); 
    swap(x,y); // function calling 
}  

