// C program to makes students grade sheet 
#include<stdio.h>
//function declaration 
int marks(int sub1,int sub2,int sub3,int sub4);

int main()
{
	// Declare integer variables
	int sub1,sub2,sub3,sub4;
	
	// Take marks of sub 1 from the user 
	printf("Enter the marks of Sub1=");
	scanf("%d",&sub1);
	
	// Check if the marks for the first subject are less than 35. If so, print "Fail".
	if (sub1<35)
	{
		printf("Fail\n");
	}
	
	// Take marks of sub 2 from the user
	printf("Enter the marks of Sub2=");
	scanf("%d",&sub2);
	
	// Check if the marks for the second subject are less than 35. If so, print "Fail".
	if (sub2<35)
	{
		printf("Fail\n");
	}
	
	// Take marks of sub 3 from the user 
	printf("Enter the marks of Sub3=");
	scanf("%d",&sub3);
	
	// Check if the marks for the third subject are less than 35. If so, print "Fail".
	if (sub3<35)
	{
		printf("Fail\n");
	}
	
	// Take marks of sub 4 from the user 
	printf("Enter the marks of Sub4=");
	scanf("%d",&sub4);
	
	// Check if the marks for the fourth subject are less than 35. If so, print "Fail".
	if (sub4<35)
	{
		printf("Fail\n");
	}
	
	// Calling the function with arguments
	marks(sub1, sub2, sub3, sub4);
}

//function definition
int marks(int j1,int j2,int j3,int j4)
{
	// Declare two float variables
	float percentage,total;
	
	// Calculate the total marks.
	total=j1+j2+j3+j4;
	
	// Print the total marks.
	printf("Total is = %.2f\n",total);
	
	// Calculate the percentage.
	percentage = (total / 400) * 100;
	
	// Print the percentage.
	printf("Percentage is = %.2f\n",percentage);
	
	// Check the percentage and print the appropriate grade.
	if (percentage>=90)
	{
		printf("Percentage is %f anf Grade is A",percentage);
	}
	else if (percentage>=80)
	{
		printf("Percentage is %f anf Grade is B",percentage);
	}
	else if (percentage>=70)
	{
		printf("Percentage is %f anf Grade is C",percentage);
	}
	else
	{
		printf("Congrats You Have Cleared This Exam");
	}
	return 0;
}
