// C program to check the array elements are even or odd.
#include<stdio.h>
int check(int num);// function declaration 

int main()
{
	int i;
	int array1[10];// declared array with 10 elements
	printf("Enter the array elements: ");
	//loop iterates till i not becomes 10
	for(i=0;i<10;i++)
	{
		scanf("%d",&array1[i]);// Take Input from the user and storing it indices wise 
		check(array1[i]);// Call the function 
	}
	
}
// Function definition 
int check(int num)
{
	//check number is even or not 
	if(num%2==0)
		printf("%d is even\n",num);//print the even result
	else
		printf("%d is odd\n",num);//print the odd result

}