//C Program to convert the character into the Ascii value using Function
#include<stdio.h>

void AsciiPrint(char);// Funtion Declaration

int main()
{
	// Variable Declaration
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);// Take Input Character from the user 
	AsciiPrint(c);// Call the Ascii Function

}

// Function Definition
void AsciiPrint(char ch)
{
	printf("Asciivalue is : %d",ch);//Displaty the output 
}