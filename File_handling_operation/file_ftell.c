
// C program to demonstreate file function ftell() 
#include<stdio.h>
int main()
{
//Declares a FILE pointer variable.
	FILE *data;
	//Declares an integer variable.
	int length;

	//Opens the file in read mode.
	data = fopen("Name.txt", "r");

	//Moves the file pointer to the end of the file.
	fseek(data, 0, SEEK_END);

	//Gets the position of the file pointer, which is the size of the file.
	length = ftell(data);

	//Closes the file.
	fclose(data);
	
	//Displays the size of the file in bytes.
	printf("Size of file: %d bytes", length);


	return 0;
}
