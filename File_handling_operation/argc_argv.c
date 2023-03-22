// C program to compare the arguments if its compare then do some action
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	//Displays the number of arguments passed to the program.
	printf("Size of Argc is : %d\n",argc);
	int choice;

	//Compares the first and second arguments passed to the program.
	if(strcmp(argv[1], argv[2]) == 0)
	{
		//Displays a menu of options to the user.
		printf("1. Add Student Detail\n");
		printf("2. Delete the details \n");
		printf("3. Update the details \n");
		printf("4. Display the details \n");
		printf("5. Exit \n");
	
		//Prompts the user to enter a choice.
		scanf("%d", &choice);   
	}
	else
	{
		//Displays a message if the first and second arguments passed to the program are not equal.
		printf("No");
	}

	//Exits the program.
	return 0;
}