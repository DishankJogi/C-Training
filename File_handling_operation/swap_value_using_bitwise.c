// C program to swap value using bitwise operator and store swap value into the files.
#include<stdio.h>

int main()
{
	FILE *fdata;// Declare the file pointer variable 
	int a,b;// Declares Integer variable 
	// Take Value from the user 
	printf("Enter the Value of A:");
	scanf("%d",&a);
	printf("Enter the Value of B:");
	scanf("%d",&b);
	// Perform the bitwise operation 
	a = a ^ b;
    b = a ^ b;
    a = a ^ b;
	
	// open the file "swap.txt" in write mode
	fdata = fopen("swap.txt","w");
	printf("After Swapping\n");
	// print the swapped values of 'a' and 'b' to the console and write them into the file
	fprintf(fdata,"swapped values are : a=%d , b=%d",a,b);
	// closing the file 
	fclose(fdata);
	
	return 0;
}