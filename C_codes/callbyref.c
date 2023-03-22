// Square of Number using Function in call by reference  
#include <stdio.h>
// function prototype
void _square(int *n);

int main()
{
    int number;

    printf("Enter the Number:");
    scanf("%d", &number);

    // calling the _square function and passing the address of the number variable
    _square(&number);

    printf("number is : %d\n", number);

    return 0;
}

// function to calculate the square of a number
void _square(int *n)
{
    int a = (*n) * (*n); // calculate the square and store it in the 'a' variable
    printf("Square is : %d\n", a);
}
