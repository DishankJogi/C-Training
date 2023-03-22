// C program to check the user input number is positive,negative or zero
#include<stdio.h>

int main(){
	int a;
	// Take User input 
	printf("enter the number:");
	scanf("%d",&a);// Store user input into the a
	
	if(a>0){
		printf("The given number is positive");
	}	
	else if(a<0){
		printf("The given number is negtive");
	}
	else{
		printf("The given number is Zero");
	}
	return 0;
}