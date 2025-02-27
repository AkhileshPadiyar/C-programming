#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\t\t\t------X------Input------X------\n\n\n");    
    printf("Enter values of a and b respectively\n");
    scanf("%d %d",&a,&b);
    printf("\t\t\t------X------Output------X------\n\n\n");    
    printf("Inital values of \na: %d\nb: %d\n\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Replaced values are\na: %d\nb: %d\n",a,b);
}