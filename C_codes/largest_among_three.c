//C program to find the largest of three numbers (i.e 12, 25, 13) using if condition
#include<stdio.h>

int main(){
	
	// Declares three integer variables
    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c =");
    scanf("%d",&c);

	// compare the a and b
    if (a>b)
    {
        printf("Largest Number is %d",a);
    }
	// compare the a and c
    else if (a>c)
    {
        printf("Largest Number is %d",a);
    }
	// compare the b and c
    else if (b>c)
    {
        printf("Largest Number is %d",b);
    }
	
    else
    {
        printf("Largest Number is %d",c);
    }
    return 0;   
    }
    
