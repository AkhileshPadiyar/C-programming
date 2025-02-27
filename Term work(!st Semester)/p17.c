#include<stdio.h>
#include<math.h>
int arms(int);
void main()
{
    int n,res;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter the Number: ");
    scanf("%d",&n);
    res = arms(n);
    printf("\t\t\t------X------Output------X------\n\n\n");
    if(res == n)
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong number",n);
}

int arms(int n){
    int val = 0;
    while(n!=0)
    {
        int d = n % 10;
        val = val + d*d*d;
        n = n / 10;
    }

    return val;
}