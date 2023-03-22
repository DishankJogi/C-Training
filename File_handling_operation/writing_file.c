// C program to store the data into the txt file 
#include<stdio.h>

int main()
{
    FILE *ap,*fp; // declare two file pointer variables
    char buff[200]; // declare a character array 

    // open the file "Company.txt" in write mode and store the file pointer in 'ap'
    ap = fopen("Company.txt","w");

    // open the file "Company.txt" in read mode and store the file pointer in 'fp'
    fp = fopen("Company.txt","r");

    // write two lines of text to the file pointing 'ap'
    fprintf(ap,"Hello , SIQOL....\n");
    fprintf(ap,"I am Dishank Jogi\n");

    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }

    // close the file 
    fclose(ap);
    fclose(fp);
}
