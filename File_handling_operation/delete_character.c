// C program to delete specific character from the text file 

#include <stdio.h>// Preprocessor Directives
int main() 
{
    char file_name[100], char_to_delete;// declares array and temp storage for character 
    FILE *fp, *fp_temp;// File Pointer 
    int temp;//

    printf("Enter the character to delete: ");
    scanf(" %c", &char_to_delete);

    fp = fopen("count_space_tab_textline.txt", "r");// file open in read mode 
    fp_temp = fopen("temp.txt", "w");// file open in write mode 

    if (fp == NULL) // Check file exist
	{
        printf("File not found!");
        return 1;
    }
	//
    while ((temp = fgetc(fp)) != EOF) // Read each character from the file 
	{
        if (temp != char_to_delete) // if the character is not equal to delete character 
		{
            fputc(temp, fp_temp);// write the character in temporary file 
        }
    }
	
	// closing the file 
    fclose(fp);
    fclose(fp_temp);
	
	//remove file and renaming the file name 
    remove("count_space_tab_textline.txt");
    rename("temp.txt", "count_space_tab_textline1.txt");
	
	// This message for user to complete his execution 
    printf("Character deleted from file successfully.",);

    return 0;
}
