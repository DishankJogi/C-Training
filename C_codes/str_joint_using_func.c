// C program to concatenation two string by user defined function
#include <stdio.h>

// Function Definition
int joint_string(char name[], char surname[]) 
{
    int i, j;

    // Find the end of the string
    while (name[i] != '\0') {
        i++;
    }

    // Concatenate the surname to the end of the name string
    while (surname[j] != '\0') {
        name[i] = surname[j];
        i++;
        j++;
    }

    // Add the null terminator to the end of the concatenated string
    name[i] = '\0';

    // Print the concatenated string
    printf("Joint: %s ", name);
}

int main() 
{
    char str1[16], str2[16];

    // Get input from user for name string
    printf("Enter the Name String:");
    scanf("%[^\n]%*c", str1);

    // Get input from user for surname string
    printf("Enter the Surname:");
    scanf("%[^\n]%*c", str2);

    // Call the function 
    joint_string(str1, str2);
}
