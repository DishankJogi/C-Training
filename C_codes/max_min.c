// C program to find minimum and maximum number from the array of 10 integers numbers 
#include<stdio.h>
int main()
{
	
	int i,max,min;// declares variables 
	int array1[10]={11,22,32,4,5,66,77,55,44,232};// initialize array of 10 integers 
	min = max = array1[0];// set the initial values of min and max to the first element of the array
	
	// loop through the array and update the values of min and max
	for(i=1;i<10;i++)
	{
		if(array1[i]<min)// if the current element is less than the current value of min, update min
		{
			min = array1[i];
		}
		if(array1[i]>max)// if the current element is greater than the current value of max, update max
		{
			max = array1[i];
		}
	}
	// print the values of max and min
	printf("maximum is = %d\t minimum is = %d",max,min);
}