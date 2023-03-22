//c program to copy data in to str1 in to str2 with space and also without using strcpy  fucntion

#include<stdio.h>// preprocessor directives 
//function definition 
int copy_str(char x[],char y[])
{
    int i=0;// Declares variables
    while(y[i]!='\0')// Y iterate until the not becomes null
    {
        x[i]=y[i];// assign one by one element to the x[i]
        i++;// i increment by 1
    }
    x[i]='\0';//string always end with null value
    printf("After copying String: %s\n",x);//prints the result 
}

int main()
{
    char a[15],b[15];// declares two array 
	// take string user input 
    printf("Enter the string for A\n");
    scanf("%[^\n]%*c",a);
    
    printf("Enter the string for B\n");
    scanf("%[^\n]%*c",b);
    
    copy_str(a,b);
}