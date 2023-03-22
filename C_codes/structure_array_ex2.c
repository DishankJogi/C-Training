//C program to store the friends details using structure 
#include<stdio.h>// Preprocessor Directives 
#include<string.h>// Preprocessor Directives 
// Defined the structure 
struct friends
{
    char name[25];// member 1
    int years_of_friendship;// member 2
    char expertise_sub[30];// member 3
};
int main()
{
    struct friends f1[7];// Defined array  
    int i,j;
	//Loop  Iterate 7 times and take details from the user  
    for(i=0;i<7;i++)
    {
        printf("Friend %d\n",i+1);
        printf("Name:");
        scanf("%s",f1[i].name);
        printf("Years of Friendship:");
        scanf("%d",&f1[i].years_of_friendship);
        for(j=0;j<3;j++)
        {
            printf("Enter Subject %d",j+1);
			printf("Test 1");
            scanf("%s",f1[i].expertise_sub[j]);
        }
    }
	//Loop  Iterate 7 times and display the result 
    for(i=0;i<7;i++)
    {
        printf("Name: %s\n",f1[i].name);
        printf("Years of Friendship: %d\n",f1[i].years_of_friendship);
        for(j=0;j<3;j++)
        {
            printf("%s\n",f1[i].expertise_sub[j]);
        }
    }
	return 0;
}