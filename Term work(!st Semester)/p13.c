#include<stdio.h>
void main()
{
    int a=0,b=1,next,n;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the Limit \n");
    scanf("%d",&n);
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(n==0)
        printf("%d",a);
    else if(n==1)
        printf("%d, %d",a,b);
    else
    {
        printf("%d, %d, ",a,b);
        for(int i=1;i<=n-2;i++)
        {
            next = a+b;
            a=b;
            b=next;
            printf("%d, ",next);
        }
    }
}