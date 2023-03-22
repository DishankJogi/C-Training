//c program to copy data in to str1 in to str2 without using strcpy  fucntion
#include<stdio.h>// Preprocessor directives 

int main()
{
	// declare and initialize array with string 
    char str1[16]="DishankJogi";
	// declare array without initialize 
    char str2[8];
    int i;
    for(i=0;str1[i]!='\0';i++)// loop iterate untill the string elements not become null 
    {
        str2[i]=str1[i];// assign each element to str2 
    }
    printf("length of str1 is : %d\n",i);// prints the length of string 
    str2[i]='\0';// string always end with the null value
    printf("%s",str2);// prints string 2 
}