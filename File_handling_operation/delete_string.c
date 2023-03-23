// C program to delete specific word from the text file
#include <stdio.h>
#include <string.h>

int main() {
    char word_to_delete[100];// array of the delete string
    FILE *data, *data_temp;// two file pointers
    char line[1000];//temporary storage for line
    int word_length, i;//Declares integer variables

	// Take Input from the user
    printf("Enter the word to delete: ");
    scanf("%s", word_to_delete);
	// Counting Length of Deleted String
    word_length = strlen(word_to_delete);
	// Open the file in read mode 
    data = fopen("count_space_tab_textline.txt", "r");
	// Open the file in write mode , make new file if doesn't exist
    data_temp = fopen("temp.txt", "w");

    if (data == NULL) // check the file exist 
	{
        printf("File not found!");
        return 1;
    }
	
    while (fgets(line, sizeof(line), data)) 
	{
        i = 0;
        while (line[i] != '\0') // iterate unil the end of the line
		{
            if (strstr(&line[i], word_to_delete) == &line[i]) 
			{
                i += word_length;// Skipping the word to increment by  i 
            } 
			else 
			{
                fputc(line[i], data_temp);// wrtie line[i] character into temporary file
                i++;// increment for the write next word 
            }
        }
    }
	//closing the file 
    fclose(data);
    fclose(data_temp);
	//rename the file 
    rename("temp.txt", "count_space_tab_textline_update.txt");

    printf("Word deleted from file successfully.");

    return 0;
}
