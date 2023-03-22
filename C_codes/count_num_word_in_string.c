//C program to count number of word in the string 
#include <stdio.h>
#include <string.h>

void main()
{
    char s[200]; // declare a char array to store the string
    int count = 0, i; // declare a variable to store the word count and a loop counter
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s); // read the string until a newline character is encountered
 
    for (i = 0;s[i] != '\0';i++) // loop through the string
    {
        if (s[i] == ' ' && s[i+1] != ' ') // check if a space character is followed by a non-space character
            count++; // increment the word count
    }
    printf("Number of words in given string are: %d\n", count + 1); // print the word count
}
