#include<stdio.h>
void main()
{
    int n,a=0;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter an Integer\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            a++;
    }
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(a==2)
        printf("%d is a prime number",n);
    else
        printf("%d is not an prime number",n);
}