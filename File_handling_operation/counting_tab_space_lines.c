// C program to count no of Space , tab , charcters lines from the text file

#include<stdio.h>

int main()
{
	FILE *data;// Declares File pointer
	int no_of_line=0,no_of_tab=0,no_of_space=0,no_of_char=0;// Declares counter for the counting tab,space,charcters,lines
	
	data = fopen("count_space_tab_textline.txt","r");// Open the file in read mode 
	char ab;// storage temp  for read each character from the file

	while(data)// iterates loop until the file end
	{
		ab = fgetc(data);// get the character from the file 
		if(ab == EOF)// Check if the end of file reached
		{
			break;// exit the loop if end of file reached
		}
		no_of_char++;// Increment char counter by 1
		if(ab == ' ')// Check if the character is space
		{
			no_of_space++;// Increment space counter by 1
		}
		if(ab == '\n')// Check if the character is new line
		{
			no_of_line++;// Increment line counter by 1
		}
		if(ab == '\t')// Check if the character is tab
		{
			no_of_tab++;// Increment tab countter by 1
		}
	}
	fclose(data);// closing the file 
	
	// Prints the result on console
	printf("No of Characters :%d\n",no_of_char);
	printf("No of tab :%d\n",no_of_space);
	printf("No of lines :%d\n",no_of_line);
	printf("No of of tabs :%d\n",no_of_tab);
}