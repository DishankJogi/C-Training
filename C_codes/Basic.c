// C program reads three subject marks of a student and stores them in an array named "marks"
// The marks for Physics, Maths, and Science are stored in marks[0], marks[1], and marks[2] respectively.

#include<stdio.h>// Preprocessor Directives
int main()
{
	// declare an array of 3 integers to store the marks
	int marks[3];
	// get input for Physics marks and store in marks[0]
	printf("Enter Physics Marks:");
	scanf("%d",&marks[0]);

	// get input for Maths marks and store in marks[1]
	printf("Enter maths Marks:");
	scanf("%d",&marks[1]);

	// get input for Science marks and store in marks[2]
	printf("Enter Science Marks:");
	scanf("%d",&marks[2]);

	// print the marks for all three subjects using array indices
	printf("Physics = %d , Maths = %d, Science =%d",marks[0],marks[1],marks[2]);

	return 0;
}
