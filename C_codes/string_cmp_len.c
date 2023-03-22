// C program to compare two strings
#include<stdio.h>
#include<string.h>

int main()
{
    // Declare two character arrays to store the input 
    char name1[15], name2[15];
    printf("Enter the Name 1: ");
    scanf("%s", &name1); // Read input 
    printf("Enter the Name 2: ");
    scanf("%s", &name2); // Read input 

    // Print the length of the string using strlen() function
    printf("Length of Name1: %d\n", strlen(name1));
    printf("Length of Name2: %d\n", strlen(name2));

    // Compare the two input string 
    if (strcmp(name1, name2) == 0)
    {
        printf("Both names are equal.");
    }
    else
    {
        printf("Names are not equal.");
    }
}

//C program to find the String Length
#include<stdio.h>
#include<string.h>

// Function to find the length of a string
int string_len(char x1[])
{
    int i = 0;
    while (i < x1[i])
    {
        i++;
    }
    printf("%d", strlen(x1)); // Print the length of the string 
}

int main()
{
    // Declare a character array to store the input string
    char a1[20];
    printf("Enter the string: ");
    scanf("%[^\n]", a1); // Read input for the string

    string_len(a1); // Call the function 
}
