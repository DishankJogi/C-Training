// C program to print the string using pointer 
#include<stdio.h>

int main()
{
    int i;
    char mystr[] = "I am Embedded Intern"; // declare and initialize a string
    char *pointer;
    pointer = mystr; // initialize pointer to the start of the string

    // iterate through the string until the null terminator is reached
    while(i < mystr[i]) {
        printf("character : %c", &pointer); // print the current character
        i++;
    }
    
    return 0;
}
