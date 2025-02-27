#include<stdio.h>
void main()
{
    int n = 0,a=0,sum=0;
    float avg;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        scanf("%d",&a);
        sum = sum + a;
    }
    avg = (float)sum/n;
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The Sum of the numbers is %d",sum);
    printf("\nThe Average of the numbers is %f",avg);
}