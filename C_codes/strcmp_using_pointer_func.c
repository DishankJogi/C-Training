#include<stdio.h>// preprocessor directives 
#include<string.h>// preprocessor directives

// Function defintion 
int astrcmp(char *x1, char *x2)
{
    int i = 0;

    // Compare the characters of the two strings until a difference is found or one or both of the strings end
    while (*x1 != '\0' && *x2 != '\0' && *x1 == *x2) 
    {
        x1++;
        x2++;
    }

    // Check if the strings are equal or not and print the result
    if (*x1 == *x2) 
    {
        printf("Both strings are the same.");
    } 
    else 
    {
        printf("Strings are not the same.");
    }
}

int main()
{
    // Declare two strings 
    char *a1 = "Dishank";
    char *a2 = "Dishank";
    
    // Call the function
    astrcmp(a1, a2);
}
