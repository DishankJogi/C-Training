// C program to print the integer data into the file 
#include<stdio.h>

int main()
{
    FILE *number; // declare a file pointer variable named 'number'
    int i,num; // declare integer variables 

    printf("Enter the Ending Number:");
    scanf("%d",&num);

    // open the file "print.dat" in binary write mode, creating it if it doesn't exist
    number = fopen("print.dat","wb");

    // loop from 0 to 'num-1'
    for(i=0;i<num;i++)
    {
        // write the value of 'num' to the file pointed to by 'number'
        putw(num,number);
    }

    // close the file pointed to by 'number'
    fclose(number);
}
