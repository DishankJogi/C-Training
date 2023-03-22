// C program to swap the value of two variables with the help of a third variable.

#include<stdio.h>

int main()
{
	
    int a,b,c;//declares integer variables
    a=3;// Initialize varibale with value 3
    b=4;// Initialize varibale with value 4

	// print the values of vatiable before swapping 
    printf("Value of Variable A is : %d\n",a);
    printf("Value of Variable B is : %d\n",b);

	c=b; // Store the value of b in variable c
	b=a; // Store the value of a in variable b
	a=c; // Store the value of c in variable a, which is the original value of b
	
    
	// Print the new values of variable after swapping
	printf("Value of Variable A is : %d\n",c);
    printf("Value of Variable B is : %d\n",a);

    return 0;

}
// C program to swap the value of two variables without the help of a third variable.
#include<stdio.h>
int main()
{
    int a,b;// Declares integer variables 
	// Take input from the user and store into appropriate variables
    printf("Original Value of a:\n");
	scanf("%d", &a);
    
    printf("Original Value of b:\n");    
    scanf("%d", &b);
    
	// Swap the values of variables a and b using arithmetic operations
	a = a + b;  // Add the values of a and b and store the result in variable a
	b = a - b;  // Subtract the original value of b from the new value of a and store the result in variable b
	a = a - b;  // Subtract the new value of b from the new value of a and store the result in variable a

	// printing swapping variables value
    printf("Swap value of a %d\n",a);
    printf("Swap value of b %d\n",b);

    return 0;
}