//C program to calculate the total salary of employees and calculates the total salary of each employee by adding the basic salary, DA, and HRA.
#include<stdio.h> // Preprocessor Directives 

// Structure declaration for employee details
struct employee
{
	char name[25];
	int age;
	int basic;
};

// Function declaration for displaying employee details
void display_employee(struct employee);

// Declaration of array of struct employee type
struct employee e1[4];

int main()
{
	int i;
	// Taking input of employee details using for loop
	for(i=0;i<4;i++)
	{
		printf("Enter the name:");
		scanf("%s",e1[i].name);
		printf("Enter the age:");
		scanf("%d",&e1[i].age);
		printf("Enter the Basic_salary:");
		scanf("%d",&e1[i].basic);
	}

	// Calling the function 
	display_employee(e1[i]);
	}

	// Function definition 
	void display_employee(struct employee e)
	{
		int i,da,hra,basic,Total_Salary;
		// For loop to iterate over the employee array
	`	for(i=0;i<4;i++)
		{
			printf("Employee %d\n",i+1);
			printf("Name :%s\n age:%d\n basic:%d\n",e1[i].name,e1[i].age,e1[i].basic);
    
			// Calculation of DA and HRA
			basic = e1[i].basic;
			da = (basic*10)/100; 
			printf("da:%d\n",da);
			hra =(basic*15)/100;
			printf("hra:%d\n",hra);

			// Calculation of total salary
			Total_Salary=basic+da+hra;
			printf("total_salary:%d\n",Total_Salary);
		}
	}

