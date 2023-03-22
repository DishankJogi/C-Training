#include<stdio.h>
int main(void){
    int max;
    int min;
    int temp;
    scanf("%d",&min);
    scanf("%d",&max);
    while(temp!=-999){
        scanf("%d",&temp);
        if(temp>=min && temp<=max)
        {
            printf("Nothing to report\n");
        }
        else if(temp==-999)
        {
            
            break;
        }
        else
        {
            printf("Alert!");
            break;
        }
    }
    return 0;
}