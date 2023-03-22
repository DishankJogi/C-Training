#include<stdio.h>// Preprocessor Directives 

int main()
{
	// Declares Variables
    float radius , Area_of_circle;
	
	// Take user input 
    printf("Enter Value of Radius=");
    scanf("%f",&radius);

	//Calculates Area of circle 
    Area_of_circle = 3.14*radius*radius;
    printf("Area of Circle is %f",Area_of_circle);

    return  0;
}