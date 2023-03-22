//C program to multiplication of 2 dimensonal array elements
#include<stdio.h> // Preprocessor directive to include standard input output library

int main()
{
    // Declare variables and matrices
    int i, j, mat1[2][3] = {{11, 12, 13}, {10, 10, 10}}, mat2[2][3] = {{11, 12, 13}, {10, 10, 10}}, mat3[2][3];

    // Print the elements of the first matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("The value of mat1[%d][%d] = %d\n", i, j, mat1[i][j]);
        }
    }

    // Print the elements of the second matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("The value of mat2[%d][%d] = %d\n", i, j, mat2[i][j]);
        }
    }

    // Multiply the matrices
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] * mat2[i][j];
        }
    }

    // Print the result of multiplication
    printf("The Result is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
