// C program to compare the two string  by user defined function
#include <stdio.h>// preprocessor directives
#include <string.h>// preprocessor directives

// Function Declartion 
int a1strcmp(char, char);

int main()
{
    // Declare two strings 
    char a1[] = "Dishank", a2[] = "Darshan";
    
    // Call the function 
    a1strcmp(a1, a2);
}

int a1strcmp(char x1, char x2)
{
    int i = 0;

    // Compare the characters of the two strings until a difference is found or one or both of the strings end
    while (x1[i] != '\0' && x2[i] != '\0' && x1[i] == x2[i]) 
    {
        i++;
    }

    // Check if the strings are equal or not and print the result accordingly
    if (x1[i] == x2[i]) 
    {
        printf("Both strings are the same.");
    } 
    else 
    {
        printf("Strings are not the same.");
    }
}
