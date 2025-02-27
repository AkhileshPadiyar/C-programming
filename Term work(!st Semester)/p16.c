#include<stdio.h>
void main()
{
    int a,b,c,d,e,min;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter five Integers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    if(min > d)
        min = d;
    if(min > e)
        min = e;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("%d is the smallest value", min);
}