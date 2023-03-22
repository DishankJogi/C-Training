// C program to read the data from the file in binary format.
#include<stdio.h>

int main()
{
    FILE *data; // declare a file pointer variable 
    int num; // declare an integer variable 

    // open the file "print.dat" in binary read mode
    data = fopen("print.dat","rb");

    // read an integer value from the file pointed to by 'data' into 'num' loop until the end of file (EOF) is reached
    while(num = getw(data)!=EOF)
    {
        // print the value of 'num'
        printf("%d\n",num);
    }

    // close the file
    fclose(data);
}
