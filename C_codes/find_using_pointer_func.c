// C program to find the element in the array using fucntion pointer
#include<stdio.h>

int find_ara1(int,int*,int); // Function declaration

int main()
{
    int size,i,s;
    
    printf("Enter the size of Array : ");
    scanf("%d",&size);
    
    int ara1[size]; // Declare an array of given size
    
    // Read the elements of the array from the user and store them in the array
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element of Array :",i);
        scanf("%d",&ara1[i]);
    }
    
    printf("Enter the value that u want to search from array: ");
    scanf("%d",&s);
    
    int b = find_ara1(size,ara1,s); // Call the function
    
    // Check whether the element is found or not and print the appropriate message
    if(b == 1)
    {
        printf("element found");
    }
    else
    {
        printf("Not found");
    }
    
    return 0;
}

int find_ara1(int size,int *ara1,int s)// function definition 
{
    // Search for the given element in the array and return 1 if found, otherwise return 0
    for(int i=0; i<size;i++)
    {
        if (s == ara1[i])
        {
            return 1;
        }   
    }
    return 0;
}
