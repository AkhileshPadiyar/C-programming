#include<stdio.h>
void main()
{
    int y;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the year you want to check\n");
    scanf("%d",&y);
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(y%100==0)
    {
        if(y%400==0)
            printf("%d is a leap year", y);
        else
            printf("%d is not a leap year",y);
    }
    else
    {
        if(y%4==0)
            printf("%d is a leap year", y);
        else
            printf("%d is not a leap year",y);
    }
}