//Write a program which will delete specified character from the file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	FILE *f1_data,*f2_data; 
	char line[100],data[100],c;
	
	f1_data = fopen("delete.txt","r");// main file
	if(f1_data == NULL)
	{
		printf("file is Empty");
		exit(1);
	}
	c = fgetc(f1_data);
	while(c!= EOF)
	{
		printf("%c",c);
		c = fgetc(f1_data);
	}
	
	f2_data = fopen("temp.txt","w");//temp storage file
	if(f2_data==NULL)
	{
		printf("File is Empty");
		fclose(f2_data);
        exit(1);
	}
	
	// Get the data delete from the user
    printf("\nEnter the data to be deleted: ");
    fgets(data, sizeof(data), stdin);
	
	// Line By Line Searching
	while(fgets(line,sizeof(line),f1_data))
	{
		if (strstr(line,data) == NULL)
		{
            // write line into the temporary file
            fputs(line, f2_data);
        }
    }
	fclose(f1_data);
    fclose(f2_data);
	
	//Remove Files 
	remove("delete.txt");
	
	// Rename the File
	rename("temp.txt", "updated.txt");
	printf("Deleted Successfully");
	return 0;
}