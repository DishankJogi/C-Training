// C program to store the user details  using function 
#include<stdio.h>
// Function to display user details
int user_details(char, int, int);

int main()
{
	// Declaring variables
	char name;
	int age, standard;	
	
	// Taking input from the user
	printf("Enter the name:\n");
	scanf("%c",&name);
	
	printf("Enter the Age:\n");
	scanf("%d",&age);
	
	printf("enter your standard:\n");
	scanf("%d",&standard);
	
	// Calling function to display user details
	user_details(name,age,standard);
	
	return 0;

}
// Function definition
int user_details(char a,int b,int c)
{
	// Displaying user details
	printf("Name is: %c\n",a);
	printf("Age is : %d\n",b);
	printf("Standard is :%d\n",c);
}