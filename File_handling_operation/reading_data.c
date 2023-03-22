// C program to read the data from the file 
#include<stdio.h>

int main()
{
    FILE *rd; // declare a file pointer variable 
    char buff[200]; // declare a character array 

    // open the file in read mode
    rd = fopen("Company.txt","r");

    // read each string from the file pointed to by 'rd' into 'buff' and loop until the end of file (EOF) is reached
    while(fscanf(rd,"%s",buff)!=EOF)
    {
        // print the string 
        printf("%s",buff);
    }

    // close the file 
    fclose(rd);
}
