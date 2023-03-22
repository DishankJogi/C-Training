#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Define the structure of employee records
struct records_company
{
    char name[30];
    int age;
    float salary;
};

// Declare array of 5 employee records
struct records_company emp[5];

// Declare pointer to array of employee records
struct records_company *ptr=&emp[5];

// Function declartion 
void sorting(struct records_company emp[5]);

int main()
{
    // Declare variables
    int i,j,n;
    // Loop iterate 5 time and read the name , age ,salary of the each employee
    for(i=0;i<5;i++)
    {
        printf("Enter the Detail of Employee %d\n",i+1);
        printf("Enter the Name=");
        
        // Read employee name
        scanf("%s",ptr->name);
        
        printf("Enter the age=");
        
        // Read employee age
        scanf("%d",&ptr->age);
        
        printf("Enter the salary=");
        
        // Read mployee salary
        scanf("%f",&ptr->salary);
    }
    
    // number of employee records to 5
    n=5;
    
    // Loop iterates 5 times and display each employee details
    for(i=0;i<5;i++)
    {
        printf("Details of Employee %d\n",i+1);
        printf("Enter the Name=%s\n",ptr->name);
        printf("Enter the age=%d\n",ptr->age);
        printf("Enter the salary=%f\n",ptr->salary);
    }
    
    // Call the sorting function
    sorting(emp);
}

// Function definition 
void sorting(struct records_company emp[5])
{   
    // Declare variables
    int i,j,n=5;
    struct records_company temp;
    
    // Bubble sort algorithm to sort employee records by name
    for(i=0;i<n-1;j++)
    {
        for(j=0;j<(n-1-j);j++)
        {
            // Compare employee names and swap records if needed
            if(ptr[j].name,ptr[j+1].name)
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}
