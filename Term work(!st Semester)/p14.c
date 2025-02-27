#include<stdio.h>
void main()
{
    int n,res=0;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
         res = res + i;
    }
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(res == n)
    printf("%d is a perfect number", n);
    else
    printf("%d is not a perfect number", n);
}
