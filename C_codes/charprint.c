// This program prints a character multiple times
#include<stdio.h>

// This function takes a character and an integer as input and prints the character that many times
int CharPrint(char c,int x)
{
	int i=1;
	while(i<=x)
	{
		printf("%c",c);
		i++;
	}
}

int main()
{
	char letter;
	int num;
	printf("Enter the character:");
	scanf("%c",&letter);

	printf("Enter the Number:");
	scanf("%d",&num);

	// Calls the CharPrint function to print the character 'num' number of times
	CharPrint(letter,num);

	return 0;
}
