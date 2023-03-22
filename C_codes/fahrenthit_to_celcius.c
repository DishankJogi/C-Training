// C program to find convert celcius to fahrenhit and fahrenhit to celcius using function 
#include<stdio.h>

float Celcius(float);// function declaration
float Fahrenhit(float);// function declaration

int main()
{
	//variables declartion
	float a,b;
	float x,y;
	
	printf("Enter the fahrenhit value:");
	scanf("%f",&a);// Take input of a from the user and store into a 
	
	printf("Enter the celcius value:");
	scanf("%f",&b);// Take input of b from the user and store into b
	
	x = Celcius(a);// calling the function 
	printf("Celcius is : %f \n",x);//prints results
	
	y   = Fahrenhit(b);// calling the function 
	printf("Fahrenhit is : %f \n",y);//prints results
	

}

float Celcius(float f)// celcius function definition 
{
	return (f-32)*5/9; // conversion formula 
}


float Fahrenhit(float c)// fahrenhit function definition
{
	return c * 1.8 + 32;// conversion formula
}