#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,a,b,res;
    printf("\t\t\t------X------Input------X------\n\n\n");
    printf("Enter two Integer\n");
    scanf("%d %d",&a,&b);
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    printf("Enter your choice ");
    scanf("%d",&n);
    printf("\t\t\t------X------Output------X------\n\n\n");
    switch(n)
    {
        case 1: 
            res=a+b;
            break;
        case 2:
            res=a-b;
            break;
        case 3:
            res=a*b;
            break;
        case 4:
            res = a/b;
            break;
        default:
            printf("Wrong Choice");
            exit(0);
    }
    printf("Your result is %d",res);
}