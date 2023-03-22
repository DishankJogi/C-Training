// C program to prints each character in a given string along with its address.
#include <stdio.h>

int main() {
    int i=0;
    char str[] = "Dishank Jogi"; // declare and initialize a string

    // iterate through the string until the null terminator is reached
    while (i < str[i]) {
        printf("character: %c\n", str[i]); // print the current character
        printf("address: %u\n", &str[i]); // print the address of the current character
        i++;
    }

    return 0;
}
