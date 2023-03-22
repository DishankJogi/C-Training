// C program to add car collection details into structure using function
#include<stdio.h>

// Defined the structure
struct car_collection
{
	char brand[30];// Member 1
	char model[25];// Member 2
	char fuel_type[10];// Member 3
	int seat_capacity;// Member 4
	
};

// Function declaration 
void cars_display(struct car_collection);
// structure array declaration 
struct car_collection c1[5];

int main()
{
    int i;
    for(i=0;i<5;i++)// loop iterates 5 time for collect 5 car details from the user 
    {
        printf("Enter the Brand Name:");
        scanf("%s",c1[i].brand);
        printf("Enter the Model Name:");
        scanf("%s",c1[i].model);
        printf("Enter the Fuel Type:");
        scanf("%s",c1[i].fuel_type);
        printf("Enter the seat capacity:");
        scanf("%d",&c1[i].seat_capacity);
    }
    cars_display(c1[i]);// call the function 
}
// Function Definition 
void cars_display(struct car_collection c)
{
    int i=0;
	printf("\"This My Car Collection\"\n");
    for(i=0;i<5;i++)// Prints the details of the all cars 
        {
            printf("Brand:%s\n Model:%s\n fuel type:%s\n seating capacity:%d\n",c1[i].brand,c1[i].model,c1[i].fuel_type,c1[i].seat_capacity);
        }
}