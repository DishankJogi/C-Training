// C program to compare two text file contents 
#include <stdio.h>// Processor Directives
#include <string.h>// Processor Directives

#define MAX_LINE_LENGTH 100

int main() 
{
    FILE *fp1, *fp2;//file Pointer
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];//temp string storages
    int line_num = 1, diff = 0;// counters

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
            printf("Difference found at line %d:\n", line_num);
            printf("File 1: %s\n", line1);
            printf("File 2: %s\n", line2);
        }
        line_num++;
    }
	// closing the file 
    fclose(fp1);
    fclose(fp2);

    if (diff) 
	{
		return 1;
    } 
	else 
	{
        return 0;
    }

    
}
