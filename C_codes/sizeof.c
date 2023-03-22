// C program to check size of integer and float using sizeof command 
#include<stdio.h>// Preprocessor Directives

int main(){

    int a;
    float b;
    printf("%d\n",sizeof(a));// display the size of integer a in bytes
    printf("%f\n",sizeof(b));// display the size of float b in bytes
    return 0;
}