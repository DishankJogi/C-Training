// C program to Compare two text file.

#include <stdio.h>// Preprocessor Directives 
#include <string.h>// Preprocessor Directives

#define MAX_LINE_LENGTH 100

int main() 
{
    FILE *fp1, *fp2;//file Pointer
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];//temp string storages
    int line_num = 1, diff = 0;// counters
	
	//open the file in the read mode 
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
	
	//If files Are Empty
    if (fp1 == NULL || fp2 == NULL) 
	{
        printf("Failed to open file\n");
        return 1;
    }
	
    while (fgets(line1, MAX_LINE_LENGTH, fp1) && fgets(line2, MAX_LINE_LENGTH, fp2))//store file contents into the char array 
	{
        if (strcmp(line1, line2) != 0)//Temp Stroing string comparision
		{
            diff = 1;
        }
        line_num++;
    }
	// Closing the file 
    fclose(fp1);
    fclose(fp2);

    if (diff) 
	{
		// Data Not Matching
		printf("1\n");
		printf("Data Not Matched");
    } 
	else 
	{
		//Data Match
        printf("0\n");
		printf("Data Matched");
    }

    
}
