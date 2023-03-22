#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct detail_students
{
    char name[25];
    int roll_numb;
}s1[5];

void addStudent();
void deleteStudent();
void updateStudent();
void display_data();

int i=0;   
int main()
{
   int choice;
   char userid[20],password[20];
   //If User Id & Password Match Than & Than Further code will execute. 
   printf("Enter User Id:");
   scanf("%s",userid);
   printf("Enter Password:");
   scanf("%s",password);
   if((strcmp(userid,password)==0))
   {
		printf("Enter the task that you want to do\n");
		printf("1. Add Student Detail\n");
		printf("2. Delete the details \n");
		printf("3. Update the details \n");
		printf("4. Display the details \n");
		printf("5. Exit \n");
		scanf("%d", &choice);   
   }
   else
   {
	   exit(0);
   }

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


// Function for add student details
void addStudent()//Function definition
{  
    for(i=0;i<5;i++)
    {
        printf("Enter name :\n");
        scanf("%s", s1[i].name);
        printf("Enter the roll number:\n");
        scanf("%d", &s1[i].roll_numb);
    }
   main();//Function call
}


// Function for delete a Student
void deleteStudent()//Function definition
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == s1[j].roll_numb)
      {
         for (int k = j; k < 10; k++)
         {
            s1[k] = s1[k + 1];
         }
         i--;
      }
   }
   printf("students record deleted successfully");
   main();//Function call
}

// Function to update a student's data
void updateStudent()//Function definition
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
               scanf("%d", s1[j].roll_numb);
               break;
         }
         printf("Records updated successfully\n");
      }
   }
    display_data();//Function call
}
//Function To Display the data
void display_data()//Function definition
{
    for(i=0;i<5;i++)
    {
        printf("%s\n" "%d\n",s1[i].name,s1[i].roll_numb);
        
    }
    main();//Function call
}