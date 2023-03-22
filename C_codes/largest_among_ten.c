//C program to find the largest number among ten integers 
#include<stdio.h> // preprocessor Directives 

int main()
{
	// declare variables for ten integer numbers, largest number.
	int a, b, c, d, e, f, g, h, i, j, p, q, w, x, y, z, large;
	 
	// Take user input for ten integer number
	printf("Enter First integer numbers:");
	scanf("%d",&a);
	 
	printf(" Enter Second integer numbers:");
	scanf("%d",&b);
	 
	printf("Enter Third integer numbers:");
	scanf("%d",&c);
	 
	printf("Enter Four integer numbers:");
	scanf("%d",&d);
	 
	printf("Enter Five integer numbers:");
	scanf("%d",&e);
	 
	printf("Enter Six integer numbers:");
	scanf("%d",&f);
	 
	printf("Enter Seven integer numbers:");
	scanf("%d",&g);
	 
	printf("Enter Eight integer numbers:");
	scanf("%d",&h);
	 
	printf("Enter Nine integer numbers:");
	scanf("%d",&i);
	 
	printf("Enter Ten integer numbers:");
	scanf("%d",&j);
	 
	// compare first two numbers
	x = (a > b ? a : b); 
	 
	// compare next two numbers
	y = (c > d ? c : d);
	 
	// compare next two numbers
	z = (e > f ? e : f);
	 
	// compare next two numbers
	p = (g > h ? g : h);
	 
	// compare final two numbers
	q = (i > j ? i : j);
	 
	// compare intermediate results to find largest number
	w = x > y ? (x > z ? x : z) : (y > z ? y : z);
	 
	large = p > q ? (p > w ? p : w) : (q > w ? q : w);
	 
	// print the largest number
	printf("\n The largest number among 10 numbers : %d", large);
	 
	return 0;
}
