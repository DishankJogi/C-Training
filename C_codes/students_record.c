// C program to maintain students records using structure 
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

// Define a struct for student details
struct detail_students
{
    char name[25];
    int roll_numb;
}s1[5];

int i=0;   

int main()
{
   int choice;
 
   // Display menu of options for the user to choose from
   printf("Enter the task that you want to do\n");
   printf("1. add detail\n");
   printf("2. delete details \n");
   printf("3. update details \n");
   printf("4. display details \n");
   printf("5. exit \n");
   scanf("%d", &choice);

   // Use a switch statement to execute the user's choice
   switch (choice)
   {
    case 1:
        addStudent();//Function call
        break;
    case 2:
        deleteStudent();//Function call
        break;
    case 3:
        updateStudent();//Function call
        break;
    case 4:
        display_data();//Function call
    case 5:
        exit(0);
        break;
    default:
        exit(0);
    }
   return 0;
}

// Function for adding student details
void addStudent()
{  
    for(i=0;i<5;i++)
    {
        printf("Enter name :\n");
        scanf("%s", s1[i].name);
        printf("Enter the roll number:\n");
        scanf("%d", &s1[i].roll_numb);
    }
   main();//Function call to go back to the main menu
}

// Function for deleting a student
void deleteStudent()
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == s1[j].roll_numb)
      {
         // Shift the remaining student records up by one
         for (int k = j; k < 10; k++)
         {
            s1[k] = s1[k + 1];
         }
         i--;
      }
   }
   printf("students record deleted successfully");
   main();//Function call to go back to the main menu
}

// Function to update a student's data
void updateStudent()
{
   int temp;
   printf("Enter the roll number of student\n");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
      if (temp == s1[j].roll_numb)
      {
         printf("Enter 1 for name\n" 
                "Enter 2 for number\n");
         int c;
         scanf("%d", &c);
         switch(c) {
            case 1:
               printf("Enter updated name : ");
               scanf("%s", s1[j].name);
               break;
            case 2:
               printf("Enter updated roll number : ");
               scanf("%d", &s1[j].roll_numb);
               break;
         }
         printf("Records updated successfully\n");
      }
   }
   display_data();//Function call to display updated data
}

//Function To Display the data
void display_data()
{
    for(i=0;i<5;i++)
    {
        printf("%s\n" "%d\n",s1[i].name,s1[i].roll_numb);   
    }
    main();//Function call to go back to the main menu
}
