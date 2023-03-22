//C code prints an inverted pyramid of stars and commented code print alternative version of main program 
#include<stdio.h>
// Invert Pyramid 

int main()
{
	// initialize variables
	int i,j;
	int a=6;
	
	// loop for rows
	for(i=a;i>=1;i--)
	{
		// loop for printing stars in each row
		for(j = 1;j<=i;j++){
			printf("*");	
		}
		// move to next line after printing stars in each row
		printf("\n");
	}
	// indicate successful execution of the program
	return 0;
}

// user Input Star Prining 
// int main()
// {
	// initialize variables
	// int i,j,a;
	
	// ask user for input
	// printf("Enter the number:");
	// scanf("%d",&a);
	
	// loop for rows
	// for(i=1;i<=a;i++)
	// {
		// loop for printing stars in each row
		// for(j=1;j<=i;j++){
			// printf("*");	
		// }
		// move to next line after printing stars in each row
		// printf("\n");
	// }
	// indicate successful execution of the program
	// return 0;
// }
