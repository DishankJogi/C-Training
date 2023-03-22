// C program for integer division operator and modulas operator.
#include <stdio.h>  // This is a preprocessor directive that includes the standard input/output library.
int main() 
{  

    int res, res_1;  // Integer Variable Declaration 
    int a = 9;  // Initialized Integer Variable with value 9
    int b = 10;  // Initialized integer variable with value 10

    res = a / b;  // integer division and stores the result in the variable res.
    res_1 = a % b;  // calculates the remainder of a divided by b using the modulo operator and stores the result in res_1.

    printf("Answer %f", res);  // Prints the result 
    printf("answerss %d", res_1);  // Prints the result 

    return 0;
}