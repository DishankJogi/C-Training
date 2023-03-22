//C program to design calculator with basic operations using switch.
#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char c;    //to store operator choice
     
	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("Choose operation to perform (+, -, *, /, %): ");
	scanf("%c", &c);    // user input and storing in to c 

	result = 0;
	switch(c)    
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			result = (float)num1 / (float)num2;    // casting the integers to floats to get accurate division
			break;

		case '%':
			result = num1 % num2;
			break;

		default:
			printf("Invalid operation.\n");
	}

	printf("Result: %d %c %d = %f\n", num1, c, num2, result);

	return 0;

}
