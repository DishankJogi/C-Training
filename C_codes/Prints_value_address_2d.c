// C program to prints the value of array element 
#include<stdio.h>// Preprocessor Directives

int main()
{
	// Intialize 2d array 
	int a1[2][3]={{1,2,3},{4,5,6}};
	// looping Variable declaration
	int i,j;
	
	for(i=0;i<2;i++)// loop iterates 2 times
	{
	for(j=0;j<3;j++)//loop iterate 3 times
	{
		printf("arr[%d][%d] = %d\n",i,j,a1[i][j]);// Prints Result 
	}
	}
	return 0;
}