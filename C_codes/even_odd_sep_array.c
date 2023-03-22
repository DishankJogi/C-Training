// C program to make separate array for the even odd number.
#include<stdio.h> // Preprocessor Directives 
int main()
{
	int n,i; // declare integer variables n and i
	printf("enter the number of elements in array :"); 
	scanf("%d",&n); // read user input and store in variable n
	
	int arr[n]; // declare an array of size n
	
	for(i=0;i<n;i++) // loop through the array to read input from the user 
	{
	    printf("Enter elements in the array:");
		scanf("%d",&arr[i]); // read user input and store it in the current element of the array
	}
	
	printf("\n Even number array is:"); // print label for even number
	for(int i=0;i<n;i++) // loop through the array to find even numbers
	{
		if(arr[i]%2==0) // check if current element of the array is even
		{
			printf("%d\t",arr[i]); // print the current element of the array
		}
	}
	
	printf("\n Odd number array is:"); // print label for odd numbers array
	for(int i=0;i<n;i++) // loop through the array to find odd numbers
    {
		if(arr[i]%2==1) // check if current element of the array is odd
		{
			printf("%d\t",arr[i]); // print the current element of the array
		}
    }
    return 0;
}
