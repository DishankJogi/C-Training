//C program to find the large number among three

#include<stdio.h>// Preprocesso Directives 

int main()
{
    // initialize variables
    int a,b,c;
    
    // take user input values from the user for a, b, and c
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    // compare values of a, b, and c to find the largest number
    if(a>b)
    {
        printf(" A is Greater than B \n");
    }
    else if (a>c)
    {
        printf("A is Greater than B \n");
    }
    else if(b>c)
    {
        printf(" B is Greater than C \n");
    }
    else
    {
        printf(" C is Greater than  A & B \n");
    }
    return 0;
}
