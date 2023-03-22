//// C program to demonstreate file function fseek() 
#include<stdio.h>

int main()
{
    FILE *data; // declare a file pointer variable named 'data'

    // open the file "Name.txt" in write mode, creating it if it doesn't exist
    data=fopen("Name.txt","w+");

    // write the string "Hello I am Dishank" 
    fputs("Hello I am Dishank",data);

    // set the file position indicator to the 11th character from the beginning of the file
    fseek(data,11,SEEK_SET);

    // overwrite the characters at the current file position with the string "Darshan"
    fputs("Darshan",data);

    // close the file pointed to by 'data'
    fclose(data);
}
