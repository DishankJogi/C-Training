// C program to collect employee details and store into the text file.
#include<stdio.h>

void main()
{
    FILE *data; // declare a file pointer variable 
    int id,num,i; // declare integer variables 
    char name[30]; // declare a character arraay
    float salary; // declare a floating-point variable

    // Take the num of employee as user input 
    printf("Total No.of Employee:");
    scanf("%d",&num);

    // open the file "employee_data.txt" in write mode, creating it if it doesn't exist
    data = fopen("employee_data.txt","w+");

    // check if the file was successfully opened
    if (data==NULL)
    {
        printf("File Does not Exist\n");
        return;
    }
    else
    {
		// Loop Iterates Num of times 
        for(i=0;i<num;i++)
        {
            printf("Enter the id\n");
            scanf("%d",&id);
            fprintf(data,"EMployee_ID = %d\n",id);
            printf("Enter the name\n");
            scanf("%s",&name);
            fprintf(data,"EMployee_Name = %s\n",name);
            printf("Enter the Salary\n");
            scanf("%f",&salary);
            fprintf(data,"Salary=%f\n",salary);
            fprintf(data,"\n");
        }
    }

    // close the file pointed to by 'data'
    fclose(data);
}
