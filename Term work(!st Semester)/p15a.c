#include<stdio.h>
void main()
{
    int n,a= 1;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("\t\t\t------X------Output------X------\n\n\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}