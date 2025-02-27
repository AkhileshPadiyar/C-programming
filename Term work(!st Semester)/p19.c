#include<stdio.h>
int reverse(int);
void main()
{
    int n,rev=0;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the Number: ");
    scanf("%d",&n);
    rev = reverse(n);
    printf("\t\t\t------X------Output------X------\n\n\n");
    printf("The Reverse of the Number is %d",rev);
}

int reverse(int n)
{
    static int a = 0;
    int d = n % 10;
    if(n == 0)
        return a;
    else
    {
        a = a*10 + d;
        reverse(n/10);
    }
}