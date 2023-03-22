// C program to find odd and even number
#include<stdio.h>

int main()
{
	int i , even = 0, odd = 0;
	int a1[10];
	
	// loop through the array a1 and read in values from the user
	for(i=0;i<10;i++)
	{
		printf("enter the element of a1[%d]:",i);
		scanf("%d",&a1[i]);

		// increment the count of even and odd numbers depending on the input
		if(a1[i] % 2 == 0)
		{
			even ++;
		}
		else
		{
			odd ++; 
		}
		
		// print out the current count of even and odd numbers
		printf("Even is : %d\n and odd is = %d\n",even,odd);
	}
	
}
