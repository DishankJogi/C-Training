// C program to concatenation of two strings 
#include<stdio.h>// Preprossor Directives 
#include<string.h>// Preprossor Directives 

int main()
{
    char str1[50],str2[50],str3[50];// char array declaration 
    strcpy(str1,"Dishank ");// add the data into str1
    strcpy(str2,"Jayendrabhai ");// add the data into str1
    strcpy(str3,"Jogi");// add the data into str1
    strcat(str1,str2);// concate data of str1 and str2
    strcat(str1,str3);// cancate data of str1 and str3
    printf("%s",str1);// prints the string 1
}