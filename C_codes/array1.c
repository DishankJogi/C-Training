// C program to Display Array Elements With Address
#include<stdio.h>

int main()
{
	int arr[5]={5,10,15,20,25},i;// Integer Array
	for(i=0;i<5;i++)
	{
		printf("Values  : %d\n",arr[i]);//Display Array Elements a[i]
		printf("Address : %d\n",&arr[i]);// Display the Adress of a[i]
	}
	
}