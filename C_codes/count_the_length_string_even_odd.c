// C program to find if the length of the input string is even or odd
#include<stdio.h>

int main()
{
	int i=0;
	char a1[51];
	scanf("%s",a1);
    // counting the length of the input string by checking if it's null terminated character or not
	while(a1[i]!='\0')
	{
		i++;
	}
	// checking if the length is even or odd and print the result
	if(i%2==0)
	{
		printf("1");
	}
	else
	{
		printf("2");
	}
	return 0;
