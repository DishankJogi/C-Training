// C program to store the details of family using structure 
#include<stdio.h>
#include<string.h>

// Define a structure
struct family
{
    char name[30];// member 1
    char blood_relation[20];// member 2
    int age;// member 3
};

int main()
{
    // Declare an array
    struct family family_arr[4];
    
    int i=0;
    
    // Loop through each element in the family_arr take detailsn from the user 
    for(i=0;i<4;i++)
    {
        printf("Name:");
        scanf("%s",family_arr[i].name);
        
        printf("Blood Relation:");
        scanf("%s",family_arr[i].blood_relation);
        
        printf("Age:");
        scanf("%d",&family_arr[i].age);
    }
    
    // Loop through each element in the family_arr will prints
    for(i=0;i<4;i++)
    {
        printf("%s\n",family_arr[i].name);
        printf("%s\n",family_arr[i].blood_relation);
        printf("%d\n",family_arr[i].age);
    }
    return 0;
}
