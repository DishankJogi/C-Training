//C program to additon or subtraction using switch case
#include<stdio.h>

int main()
{
    int a, b, sum, sub;
    char o;

    // Taking input from user
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    // Taking operator as input from user
    printf("Enter the sign + or - :");
    scanf(" %c", &o); // Note the space before %c to consume any white space character left in the buffer

    // Using switch statement to perform addition or subtraction based on the operator entered by user
    switch (o)
    {
    case '+':
        sum = a + b;
        printf("The a+b: %d\n ", sum);
        break;
    case '-':
        sub = a - b;
        printf("The Subtraction of a-b: %d\n", sub);
        break;
    default:
        printf("Invalid operator entered\n");
        break;
    }

    return 0;
}
