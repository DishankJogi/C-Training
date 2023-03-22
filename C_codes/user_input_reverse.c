#include<stdio.h>

int main()
{
	int Number; // declaring variable 
	int reverse_Num = 0; // declaring variable 
	int remain; // declaring variable

	printf("Enter the number to reverse: ");

	scanf("%d", &Number); // taking input from user

	while (Number != 0)// reversing the number using a while loop
	{ 

    remain = Number % 10; // getting remainder after division by 10
	printf("remain = %d\n",remain);

    reverse_Num = reverse_Num * 10 + remain; // multiplying previous value with 10 and adding remainder to it
	printf("Reverse Value = %d\n",reverse_Num);

    Number = Number/10; // dividing the number by 10 to get the next digit
	printf("Number= %d\n",Number);

	}    

	printf("The reversed number is: %d", reverse_Num); // printing the reversed number

	return 0;
}