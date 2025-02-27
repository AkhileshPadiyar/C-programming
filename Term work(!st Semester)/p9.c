#include<stdio.h>
void main()
{
    int n,i=0;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter an Integer\n");
    scanf("%d",&n);
    while(n<=100000)
    {
        n=n*2;
        i++;
    }
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The number of times it's doubled is %d",i);
}