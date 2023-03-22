// C program to add details of employee without using any loop 
#include<stdio.h>// Preprocessor Directives 
#include<string.h>// Preprocessor Directives
// Defined Structute 
struct staff
{
    int employee_id;// Member 1
    char name[30];// Member 2
    char designation[30];// Member 3
};
int main()
{
    struct staff s1,s2,s3,s4;// variable Declartion of structure 
    printf("Staf List Of SIQOL\n");
	// Manually Employee 1 Details Entered 
    //Employee 1
    s1.employee_id=1;
    strcpy(s1.name,"Manishbhai Narani");
    strcpy(s1.designation,"Founder");
	// Prints the Employee Details
    printf("Employee_id:%d\n",s1.employee_id);
    printf("Name of Employee: %s\n",s1.name);
    printf("Designation: %s\n",s1.designation);
	// Manually Employee 2 Details Entered
    // Employee 2
    s2.employee_id=2;
    strcpy(s2.name,"Pratikbhai Panchal");
    strcpy(s2.designation,"Co-Founder");
	// Prints the Employee Details
    printf("Employee_id:%d\n",s2.employee_id);
    printf("Name of Employee: %s\n",s2.name);
    printf("Designation: %s\n",s2.designation);
	// Manually Employee 3 Details Entered
    //Employee 3
    s3.employee_id=3;
    strcpy(s3.name,"Darshan Rathod");
    strcpy(s3.designation,"Embedded Software Enigneer");
	// Prints the Employee Details
    printf("Employee_id:%d\n",s3.employee_id);
    printf("Name of Employee: %s\n",s3.name);
    printf("Designation: %s\n",s3.designation);
	// Manually Employee 4 Details Entered
    //Employee 4
    s4.employee_id=4;
    strcpy(s4.name,"Dishank Jogi");
    strcpy(s4.designation,"Embedded Intern");
	// Prints the Employee Details
    printf("Employee_id:%d\n",s4.employee_id);
    printf("Name of Employee: %s\n",s4.name);
    printf("Designation: %s\n",s4.designation);
    
    // For Address printing
    printf("Adress of employee id:%u\n",&s1.employee_id);//Contatins 4 Bytes
    printf("adress of name of employee: %u\n",s1.name);//Contains 30 Bytes
    printf("adress of name of designation: %u\n",s1.designation);//Contains 30 Bytes
    
}