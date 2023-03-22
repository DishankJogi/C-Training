//C program to find the large number among two

#include<stdio.h>// Preprocessor Directives 

int main()
{
	// initialize variables
    int a,b;
	// take input values from user for a, b
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
	// check the values of a, b find the largest number
    if(a>b)
    {
        printf(" A is Greater than B \n");
    }
    else
    {
        printf("B is Greater than A \n");
    }
return 0;
}