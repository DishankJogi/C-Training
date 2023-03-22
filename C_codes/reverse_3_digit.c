// C program to reversed the 3 digit number 
#include <stdio.h>// Preprocessor directives 

int main()
{
    // Variable declaration 
    int Number = 456; 
    int reverse_Num = 0; 
    int remain;
    
    // Reverse the 3-digit integer
    while (Number != 0){
        remain = Number % 10; // Compute the last digit of the number
        printf("remain = %d\n", remain); // Print the last digit

        reverse_Num = reverse_Num * 10 + remain; // Append the last digit to the reversed number
        printf("Reverse Value = %d\n", reverse_Num); // Print the reversed number

        Number = Number / 10; // Remove the last digit from the original number
        printf("Number = %d\n", Number); // Print the updated original number
    }    

    // Print the reversed 3-digit integer
    printf("The reversed number is: %d", reverse_Num);

    return 0;
}
