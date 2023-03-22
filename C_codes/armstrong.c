 //C program takes an integer input and checks if it's an Armstrong Number or not
#include<stdio.h>// PreProcessive Directives

int main()
{
	// Declares Variable
	int a,x,y,z,x_cube,y_cube,z_cube;
	
	printf("Enter the Number",a); // user input an integer
	scanf("%d",&a); // Stores the input value in the variable 'a'

	x=a%10; // Extracts the last digit of the number and stores it in the variable 'x'
	printf("X is %d\n",x);

	x_cube=x*x*x; // Computes the cube of the digit 'x' and stores it in the variable 'x_cube'
	printf("X_Cube is %d\n",x_cube);// Displays x_cube

	x = a/10; // Removes the last digit from the number and stores the remaining digits in the variable 'x'

	y = x%10; // Extracts the next digit of the number and stores it in the variable 'y'
	printf("Y is %d\n",y);// Display  y on the console
	
	y_cube=y*y*y; // Computes the cube of the digit 'y' and stores it in the variable 'y_cube'
	printf("Y_Cube is %d\n",y_cube);// Displays Y_Cube

	y = x/10; // Removes the second digit from the number and stores the remaining digits in the variable 'y'

	z = y%10; // Extracts the first digit of the number and stores it in the variable 'z'
	printf("Z is %d\n",z);// Displays z on the console
	
	z_cube=z*z*z; // Computes the cube of the digit 'z' and stores it in the variable 'z_cube'
	printf("Z_Cube is %d\n",z_cube);// Displays Z_Cube



	int Sum_cube=x_cube+y_cube+z_cube; // Computes the sum of the cubes of the digits and stores it in the variable 'Sum_cube'	
	printf("An Armstrong Number of %d is %d \n ",a,Sum_cube); // Displays the sum of the cubes of the digits
	if(Sum_cube ==a) // Checks if the sum of the cubes of the digits is equal to the input number
	{
		printf("%d An Armstrong Number\n ",a); // Displays a message that the number is an Armstrong Number
	}
	else
	{
		printf(" %d Not an Armstrong Number\n ",a); // Displays a message that the number is not an Armstrong Number
	}
	
return 0;
}