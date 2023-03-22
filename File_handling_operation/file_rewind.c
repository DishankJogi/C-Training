// C program to demonstreate file function rewind() 
#include<stdio.h>
int main()
{
	//Declares a FILE pointer variable.
	FILE *data;
	//Opens the file in write mode and creates a new file if it doesn't exist.
	data = fopen("Name1.txt", "w+");

	//Writes the string "Dishank" to the file 
	fputs("Dishank", data);

	//Sets the file pointer to the beginning of the file
	rewind(data);

	//Writes the string "Jogi" to the file, which overwrites the previous string.
	fputs("Jogi ", data);

	//Closes the file.
	fclose(data);

	return 0;

}