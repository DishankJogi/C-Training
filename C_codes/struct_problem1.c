//C program to display the train details and time in 24 hrs format.
#include<stdio.h>

struct train_info
{
    char train_name[50];
    int hours;
    int min;
    char time_format[4];
};

void train_info_display(struct train_info); // function declaration

struct train_info train[1]; // declaration of an array of structure

int main()
{
    int i;
    for(i=0; i<1; i++) // loop to get train info from user
    {
        printf("Enter the Train Name:");
        scanf("%s", train[i].train_name);
        printf("Enter the train arrival Hour:");
        scanf("%d", &train[i].hours);
        printf("Enter the train arrival time Minutes:");
        scanf("%d", &train[i].min);
        printf("Enter the train arrival time format:");
        scanf("%s", train[i].time_format);
    }
    train_info_display(train[i]); // function call
}

void train_info_display(struct train_info t )
{
    int i, hr, min;
    char f;
    for(i=0; i<1; i++) // loop to display train info
    {
        char *timef = train[i].time_format;
        char *timer = "pm";
        if(*timef == *timer) // check if the time format is "pm"
        {
            printf("**24 Hours**");
            hr = train[i].hours;
            printf("%d\n", hr+12); // add 12 to the hours to get 24-hour format
            min = train[i].min;
            printf("%d\n", min+00); // display the minutes
        }
        else // if the time format is not "pm"
        {
            printf("Name Of Train : %s\n Arrival Hours:%d\n Arrival min:%d\n Arrival format:%s\n", train[i].train_name, train[i].hours, train[i].min, train[i].time_format);
        }
    }
}
