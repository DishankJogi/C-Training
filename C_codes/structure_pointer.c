// C program to add car details in structure pointer 
#include<stdio.h>
//Defined Structure
struct car
{
    char brand[25];// member 1
    char name[30];// member 2
    int year_model;// member 3
    char colour[10];// member 4
};

int main()
{
    struct car c1={"Mahindra","Thar",2023,"Black"};
    struct car *ptr_c1=&c1;// defined structure pointer 
	// print the overall car details 
    printf("Brand:%s\n",ptr_c1->brand);
    printf("Name:%s\n",ptr_c1->name);
    printf("Year:%d\n",ptr_c1->year_model);
    printf("Colour:%s\n",ptr_c1->colour);
}